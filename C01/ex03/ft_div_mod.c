/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:00:13 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/01 17:00:15 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (!b)
		return ;
	*div = a / b;
	*mod = a % b;
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
	int a = 42;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	write(1, "div= ", 5);
	ft_putnbr(div);
	write(1, " mod= ", 6);
	ft_putnbr(mod);
	write(1, "\n", 1);
	return (0);
}*/
