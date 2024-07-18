/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:11:40 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/01 17:11:47 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer;

	if (!b)
		return ;
	buffer = *a;
	*a = *a / *b;
	*b = buffer % *b;
}

/*void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	a = 42;
	int	b = 5;
	
	ft_ultimate_div_mod(&a, &b);
	write(1, "a=", 2);
	ft_putnbr(a);
	write(1, " b=", 3);
	ft_putnbr(b);
	write(1, "\n", 1);
	return (0);
}*/	
