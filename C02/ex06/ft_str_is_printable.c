/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:10:51 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/03 14:21:12 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	*non_printable = "Test\ncaractere pas affichable";
	char	*printable = "Test avec des c4ractere$ affichables.";
	int	non_printable_rslt = ft_str_is_printable(non_printable);
	int	printable_rslt = ft_str_is_printable(printable);

	printf("Non Printable Test: %d\n", non_printable_rslt);
	printf("Printable Test: %d\n", printable_rslt);
	return (0);
}*/
