/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:40:29 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/08 19:54:45 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

/*#include <stdio.h>

int main(){
	char	str[] = "Test";
	int length = ft_strlen(str);

	printf("Longueur de la chaine '%s' : %d\n", str, length);
	return 0;
}*/
