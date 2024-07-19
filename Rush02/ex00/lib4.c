/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:28:55 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/14 21:29:02 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	append_words(char *result, char *words, int i);
char	*get_value_from_dict(char *str, char *text);
char	*get_digit_str(int digit);
char	*convert_tens(int num, char *dict, char *result);
int		ft_atoi(char *str);

char	*convert_hundreds(int num, char *dict)
{
	char	*result;

	result = (char *)malloc(256);
	result[0] = '\0';
	if (num >= 100)
	{
		append_words(result,
			get_value_from_dict(get_digit_str(num / 100), dict), 1);
		append_words(result, get_value_from_dict("100", dict), 1);
		num %= 100;
		if (num != 0)
			append_words(result, "and", 1);
	}
	result = convert_tens(num, dict, result);
	return (result);
}

char	*cttw(char *triad, char *dict, char *result, char *order)
{
	int		triad_num;
	char	*triad_words;

	triad_num = ft_atoi(triad);
	if (triad_num > 0)
	{
		triad_words = convert_hundreds(triad_num, dict);
		append_words(result, triad_words, 1);
		if (*order != '\0')
			append_words(result, order, 1);
		free(triad_words);
	}
	return (result);
}
