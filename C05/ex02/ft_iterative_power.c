/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:15:00 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/15 19:58:39 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (!power)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power --;
	}
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	char	*str = argv[1];
	int	i;
	int	n;
	int	power;

	i = 1;
	if (argc != 3)
	{
		printf("Usage: %s <number_to_convert> <power>\n", argv[0]);
		return 1;
	}
	n = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("The result of %d power %d is %d\n", n, power, 
		ft_iterative_power(n, power));
	return 0;
}*/
