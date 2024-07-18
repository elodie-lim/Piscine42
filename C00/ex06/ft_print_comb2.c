/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:34:41 by elodlim           #+#    #+#             */
/*   Updated: 2024/06/28 10:34:47 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_pattern(int number1, int number2)
{
	char	tens1;
	char	ones1;
	char	tens2;
	char	ones2;

	tens1 = number1 / 10 + '0';
	ones1 = number1 % 10 + '0';
	tens2 = number2 / 10 + '0';
	ones2 = number2 % 10 + '0';
	write (1, &tens1, 1);
	write (1, &ones1, 1);
	write (1, " ", 1);
	write (1, &tens2, 1);
	write (1, &ones2, 1);
	if (number1 != 98)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			write_pattern(number1, number2);
			number2++;
		}
		number1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
