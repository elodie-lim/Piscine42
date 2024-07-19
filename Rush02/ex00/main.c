#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

char *ft_strncpy(char *dest, const char *src, int n);
char *ft_strcat(char *dest, char *src);
char *ft_strcpy(char *dest, const char *src);
int ft_atoi(char *str);

//lib.c
void	ft_putchar(char c);
int	tab_len(char **str);
int	ft_len(char *nb);
void	print_name(int i, char *text);

//lib2.c
int	find_start_of_value(char *text, int i);
int	find_end_of_value(char *text, int i);
int	is_matching_key(char *text, char *str, int i, int count);
char	*extract_value(char *text, int start, int end);
char	*ft_get_value(char *text, char *str, int count, int i);

//lib3.c
char	*get_value_from_dict(char *str, char *text);
void	append_words(char *result, char *words, int i);
char	*get_digit_str(int digit);
char	*convert_tens(int num, char *dict, char *result);

//lib4.c
char	*convert_hundreds(int num, char *dict);
char	*cttw(char *triad, char *dict, char *result, char *order);

char **get_orders(void)
{
	static char *orders[] = {
		"", "thousand", "million", "billion", "trillion",
		"quadrillion", "quintillion", "sextillion", "septillion", "octillion",
		"nonillion", "decillion", "undecillion"};

	return (orders);
}

char *process_number(char *number, char *dict, char *result)
{
	int len;
	int num;

	len = ft_len(number);
	if (len == 0)
	{
		return (NULL);
	}
	result = (char *)malloc(1024);
	if (result)
		result[0] = '\0';
	if (result == NULL)
	{
		return (NULL);
	}
	num = ft_atoi(number);
	if (num == 0)
	{
		append_words(result, get_value_from_dict("0", dict), 1);
		return (result);
	}
	return (result);
}

char *process_triad(char *number, int len, int triad_index, char *result, char *dict, char **orders)
{
	int start;
	int end;
	char triad[4];

	start = len - (triad_index + 1) * 3;
	end = len - triad_index * 3;
	if (start < 0)
	{
		start = 0;
	}
	ft_strncpy(triad, &number[start], end - start);
	triad[end - start] = '\0';
	result = cttw(triad, dict, result, orders[triad_index]);
	return (result);
}

char *number_to_words(char *number, char *dict)
{
	int len;
	int triad_count;
	int triad_index;
	char *result;
	char **orders;

	result = process_number(number, dict, result);
	if (result == NULL || result[0] != '\0')
	{
		return (result);
	}
	len = ft_len(number);
	triad_count = (len + 2) / 3;
	triad_index = triad_count - 1;
	orders = get_orders();
	while (triad_count > 0)
	{
		result = process_triad(number, len, triad_index, result, dict, orders);
		triad_index--;
		triad_count--;
	}
	return (result);
}

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd;
	int bytes_read;
	char *words;

	if (argc != 2)
	{
		write(2, "error\n", 6);
		return (1);
	}
	if (argv[1][0] == '-')
	{
		write(2, "error\n", 6);
		return (1);
	}
	fd = open("numbers.dict", O_RDWR);
	if (fd == -1)
	{
		write(2, "error\n", 6);
		return (1);
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		write(2, "error\n", 6);
		close(fd);
		return (1);
	}
	buffer[bytes_read] = '\0';
	words = number_to_words(argv[1], buffer);
	if (words)
	{
		write(1, words, strlen(words));
		write(1, "\n", 1);
		free(words);
	}
	else
	{
		write(2, "error\n", 6);
	}
	close(fd);
	return (0);
}