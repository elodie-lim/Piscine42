/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:39:31 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/03 13:48:48 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main()
{
	char	*test = "014565";
	char	*test2 = "Chaine2caractere !@";
	int	test_result = ft_str_is_numeric(test);
	int	test2_result = ft_str_is_numeric(test2);

	printf("Numeric Test :%d\n", test_result);
	printf("Special Test :%d\n", test2_result);
	return (0);
}*/
