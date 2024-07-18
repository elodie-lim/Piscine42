/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:24:40 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/01 17:24:42 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*void ft_putnbr(int n)
{
    char c;

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    c = '0' + n % 10;
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str++, 1);
    }
}

int main(void)
{
    char str[] = "c'est une Chaine 2 caracteres !";
    int i = ft_strlen(str);

    ft_putstr(str);
    write(1, " Nb de caracteres : ", 20); 
    ft_putnbr(i);
    write(1, "\n", 1);
    return (0);
}*/
