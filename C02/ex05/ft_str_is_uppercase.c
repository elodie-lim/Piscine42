/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:03:21 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/03 14:09:58 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	test[] = "MAJUSCULES";
	char	test2[] = "minuscules & 4utre";
	int	test_rslt = ft_str_is_uppercase(test);
	int	test2_rslt = ft_str_is_uppercase(test2);

	printf("Uppercase Test Result: %d\n", test_rslt);
	printf("Special Test Result: %d\n", test2_rslt);
}*/
