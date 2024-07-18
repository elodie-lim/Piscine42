/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:21:23 by elodlim           #+#    #+#             */
/*   Updated: 2024/06/28 12:21:27 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_pattern(int array_number[], int length, int separator)
{
	char	number;

	if (separator)
	{
		write (1, ", ", 2);
	}
	while (length >= 0)
	{
		number = '0' + array_number[length];
		write(1, &number, 1);
		length--;
	}
}

void	next_number(int digits[], int curposition, int *separator, int length)
{
	while (digits[curposition] < 10)
	{
		if (!curposition)
		{
			write_pattern(digits, length, *separator);
			*separator = 1;
		}
		else
		{
			digits[curposition - 1] = digits[curposition] + 1;
			next_number(digits, curposition - 1, separator, length);
		}
		digits[curposition]++;
	}
}

void	ft_print_combn(int n)
{
	int	array_number[10];
	int	separator;

	separator = 0;
	array_number[n - 1] = 0;
	next_number(array_number, n - 1, &separator, n - 1);
}

/*int	main(void)
{
	ft_print_combn(5);
	return (0);
}*/
