/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:36:41 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/15 17:01:51 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	if (power == 1)
		return (nb);
	return (ft_recursive_power(nb, power - 1) * nb);
}

/*#include <stdio.h>
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
		ft_recursive_power(n, power));
	return 0;
}*/
