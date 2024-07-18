/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:17:49 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/10 14:45:54 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*skip_whitespace(char *str)
{
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

unsigned int	convert_to_number(char *str, unsigned int res)
{
	if (*str >= '0' && *str <= '9')
		return (convert_to_number(str + 1, res * 10 + *str - '0'));
	return (res);
}

int	ft_atoi(char *str)
{
	int				is_negative;
	unsigned int	res;

	is_negative = 0;
	str = skip_whitespace(str);
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_negative++;
		str++;
	}
	res = convert_to_number(str, 0);
	if (is_negative % 2)
		return (-1 * res);
	return (res);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s <string_to_convert>\n", argv[0]);
		return 1;
	}
	char	*str = argv[1];
	int	ft_result = ft_atoi(str);
	int	std_result = atoi(str);

	printf("Input string: \"%s\"\n", str);
	printf("ft_atoi result: %d\n", ft_result);
	printf("atoi result: %d\n", std_result);
	return 0;
}*/
