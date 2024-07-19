/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:59:49 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/14 19:59:51 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	tab_len(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len(char *nb)
{
	int	len;

	len = 0;
	while (nb[len] != '\0')
		len++;
	return (len);
}

void	print_name(int i, char *text)
{
	while (text[i] != '\n')
	{
		ft_putchar(text[i]);
		i++;
	}
}
