/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib5.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 23:40:13 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/14 23:40:14 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char *number_to_words(char *number, char *dict);
int	ft_len(char *nb);

int len_sep(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ',')
			count++;
		i++;
	}
	return (i);
}

void print_all(char *nb, char *buffer)
{
	char *words = number_to_words(nb, buffer);
	if (words)
	{
		write(1, words, ft_len(words));
		write(1, "\n", 1);
		free(words);
	}
	else
	{
		write(2, "Error\n", 6);
	}
}

int error_handling(char *number, int fd, int bytes)
{

	if (number[0] == '-')
	{
		write(2, "Error\n", 6);
		return 1;
	}
	if (fd == -1)
	{
		write(2, "Error\n", 6);
		return 1;
	}
	if (bytes == -1)
	{
		write(2, "Dict Error\n", 12);
		close(fd);
		return 1;
	}
	return (0);
}

char *remove_comma(char *nb)
{
	int i;
	char *c;
	int j;

	i = 0;
	j = 0;
	c = (char *)malloc(sizeof(char *) * len_sep(nb) + 1);
	if (!c)
	{
		c = (char *)malloc(sizeof(char *));
		c[0] = '\0';
		return (c);
	}
	while (nb[i])
	{
		if (nb[i] != ',')
		{
			c[j] = nb[i];
			j++;
		}
		i++;
	}
	c[i] = '\0';
	return (c);
}
