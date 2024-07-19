/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:22:53 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/14 20:22:55 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_get_value(char *text, char *str, int count, int i);
int		is_matching_key(char *text, char *str, int i, int count);
int		ft_len(char *nb);
char	*ft_strcat(char *dest, char *src);

char	*get_value_from_dict(char *str, char *text)
{
	int		i;
	int		count;
	int		verif;
	char	*result;

	i = 0;
	count = 0;
	verif = 0;
	result = NULL;
	while (text[i])
	{
		if (text[i] == '\n')
			verif = 1;
		if (verif && text[i] != ':')
		{
			count = is_matching_key(text, str, i, count);
			if (count == ft_len(str))
				return (ft_get_value(text, str, count, i));
		}
		if (text[i] == ':')
			verif = 0;
		i++;
	}
	return (NULL);
}

void	append_words(char *result, char *words, int i)
{
	if (*result != '\0' && i)
	{
		ft_strcat(result, " ");
	}
	ft_strcat(result, words);
}

char	*get_digit_str(int digit)
{
	char	*str;

	str = (char *)malloc(2);
	str[0] = '0' + digit;
	str[1] = '\0';
	return (str);
}

void	init_str(char *str, int num)
{
	if (num >= 20)
	{
		str[0] = '0' + num / 10;
		str[1] = '0';
		str[2] = '\0';
	}
	else if (num >= 10)
	{
		str[0] = '0' + num / 10;
		str[1] = '0';
		str[2] = '\0';
	}
	else if (num > 0)
	{
		str[0] = '0' + num;
		str[1] = '\0';
	}
}

char	*convert_tens(int num, char *dict, char *result)
{
	char	str[3];

	init_str(str, num);
	if (num >= 20)
	{
		append_words(result, get_value_from_dict(str, dict), 1);
		num %= 10;
		if (num != 0)
		{
			ft_strcat(result, "-");
			append_words(result,
				get_value_from_dict(get_digit_str(num), dict), 0);
		}
	}
	else if (num >= 10)
	{
		append_words(result, get_value_from_dict(str, dict), 1);
	}
	else if (num > 0)
	{
		append_words(result, get_value_from_dict(str, dict), 1);
	}
	return (result);
}
