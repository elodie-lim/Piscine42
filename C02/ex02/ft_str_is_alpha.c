/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:54:38 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/03 13:38:01 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z')
			&& (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main()
{
	char	*alpha_test = "Avecdescaracteresalphabetiques";
	int	alpha_result = ft_str_is_alpha(alpha_test);
	char	*special_test = "@vec de$ caracteres speci4ux" ;
	int	special_result = ft_str_is_alpha(special_test);
	char	*empty_test = "";
	int	empty_result = ft_str_is_alpha(empty_test);

	printf("Special Test Result : %d\n", special_result);
	printf("Alpha Test Result : %d\n", alpha_result);
	printf("Empty Test Result : %d\n", empty_result);
	return (0);
}*/
