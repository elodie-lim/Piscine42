/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:53:04 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/01 16:53:07 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	x = 5;
	int	y = 4;

	ft_swap(&x, &y);
	write(1, "x:", 2);
	ft_putnbr(x);
	write(1, " ", 1);
	write(1, "y:", 2);
	ft_putnbr(y);
	write(1, "\n", 1);
	return (0);
}*/
