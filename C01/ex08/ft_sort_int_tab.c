/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:38:34 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/02 14:38:37 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	restore_heap(int *tab, int last_index, int evaluated_root)
{
	int	max_value;
	int	left;
	int	right;

	max_value = evaluated_root;
	left = 2 * evaluated_root + 1;
	right = 2 * evaluated_root + 2;
	if (left < last_index && tab[max_value] < tab[left])
		max_value = left;
	if (right < last_index && tab[max_value] < tab[right])
		max_value = right;
	if (max_value != evaluated_root)
	{
		ft_swap(&tab[evaluated_root], &tab[max_value]);
		restore_heap(tab, last_index, max_value);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	middle;

	middle = size / 2 - 1;
	while (middle > -1)
	{
		restore_heap(tab, size, middle);
		middle--;
	}
	while (size - 1 > 0)
	{
		ft_swap(&tab[size - 1], &tab[0]);
		restore_heap(tab, size - 1, 0);
		size--;
	}
}

/*int	main(void)
{

	int tab[] = {1, 5, -5, 4, 2, 19};
	int size = sizeof(tab) / sizeof(tab[0]);
	ft_sort_int_tab(tab, 6);
	for(int i = 0; i < size ; i++)
	{
	printf("%d ", tab[i]);
	}
	return (0);
}*/
