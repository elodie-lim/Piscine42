/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:38:58 by elodlim           #+#    #+#             */
/*   Updated: 2024/06/29 10:53:05 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_char(int col, int row, int x, int y)
{
	if (row == 1 && col == 1)
		ft_putchar('A');
	else if (row == 1 && col == x)
		ft_putchar('C');
	else if (row == y && col == 1)
		ft_putchar('C');
	else if (row == y && col == x)
		ft_putchar('A');
	else if (row == 1 || row == y)
		ft_putchar('B');
	else if (col == 1 || col == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	print_line(int row, int x, int y)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		print_char(col, row, x, y);
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	while (row <= y)
	{
		print_line(row, x, y);
		row++;
	}
}
