/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:49:40 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/03 14:02:32 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	test[] = "lettresminuscules";
	char	test2[] = "Lettres Majuscules 2";
	int	test_reslt = ft_str_is_lowercase(test);
	int	test2_reslt = ft_str_is_lowercase(test2);

	printf("Lowercase Test: %d\n", test_reslt);
	printf("Special Test: %d\n", test2_reslt);
	return (0);
}*/
