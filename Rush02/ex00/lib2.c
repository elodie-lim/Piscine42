/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:05:35 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/14 20:09:09 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, const char *src, int n);

int	find_start_of_value(char *text, int i)
{
	int	start;

	start = i;
	while (text[start] != ':')
		start++;
	start++;
	while (text[start] == ' ')
		start++;
	return (start);
}

int	find_end_of_value(char *text, int i)
{
	int	end;

	end = i;
	while (text[end] != '\n')
		end++;
	return (end);
}

int	is_matching_key(char *text, char *str, int i, int count)
{
	if (text[i] == str[count])
		return (count + 1);
	return (0);
}

char	*extract_value(char *text, int start, int end)
{
	char	*result;

	result = (char *)malloc(end - start + 1);
	if (result)
	{
		ft_strncpy(result, &text[start], end - start);
		result[end - start] = '\0';
	}
	return (result);
}

char	*ft_get_value(char *text, char *str, int count, int i)
{
	int	start;
	int	end;

	start = find_start_of_value(text, i);
	end = find_end_of_value(text, start);
	return (extract_value(text, start, end));
}
