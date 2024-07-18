/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 09:53:36 by elodlim           #+#    #+#             */
/*   Updated: 2024/06/28 09:53:41 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_pattern(char hundreds, char tens, char ones)
{
	write (1, &hundreds, 1);
	write (1, &tens, 1);
	write (1, &ones, 1);
	if (hundreds != '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	ones;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds +1;
		while (tens <= '8')
		{
			ones = tens + 1;
			while (ones <= '9')
			{
				write_pattern(hundreds, tens, ones);
				ones++;
			}
			tens++;
		}
		hundreds++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
