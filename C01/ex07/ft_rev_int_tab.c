/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:55:47 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/01 17:55:50 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	middle;
	int	count_forward;
	int	count_backward;
	int	buffer;

	count_forward = 0;
	middle = size / 2;
	while (count_forward < middle)
	{
		count_backward = size - count_forward - 1;
		buffer = tab[count_forward];
		tab[count_forward] = tab[count_backward];
		tab[count_backward] = buffer;
		count_forward++;
	}
}

/*int main()
{
    int tab[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_rev_int_tab(tab, size);

    printf("Reversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}*/
