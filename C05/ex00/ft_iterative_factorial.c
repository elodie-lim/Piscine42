/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:00:01 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/10 16:57:42 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (!nb)
		return (1);
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	char	*str = argv[1];
	int	i;
	int	n;

	i = 1;
	if (argc != 2)
	{
		printf("Usage: %s <number_to_convert>\n", argv[0]);
		return 1;
	}
	while (i < argc)
	{
		n = atoi(argv[i]);
		if (n > 12)
		{
			printf("warning: factorial of %d may cause overflow in 32-bits int.\n", n);
		}
		printf("The Factorial of %d is %d", n, ft_iterative_factorial(n));
		i++;
	}
	return 0;
}*/
