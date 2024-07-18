/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 09:39:36 by elodlim           #+#    #+#             */
/*   Updated: 2024/06/28 09:39:43 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P", 1);
	}
	else if (n < 0)
	{
		write (1, "N", 1);
	}
}

/*int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(0);
	ft_is_negative(10);
	return (0);
}*/
