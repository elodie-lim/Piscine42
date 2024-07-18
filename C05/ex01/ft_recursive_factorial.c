/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:59:43 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/10 16:54:45 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (!nb)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
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
		printf("The Factorial of %d is %d", n, ft_recursive_factorial(n));
		i++;
	}
	return 0;
}*/
