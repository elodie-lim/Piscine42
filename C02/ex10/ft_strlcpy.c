/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:11:49 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/03 16:17:56 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	length = ft_strlen(src);
	i = 0;
	while (i + 1 < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (length);
}

/*#include <stdio.h>

int main(void)
{
    char src[] = "Chaine de caracteres!";
    char dest1[21];
    char dest2[6];
    unsigned int length1, length2;

    length1 = ft_strlcpy(dest1, src, sizeof(dest1));
    printf("Source: %s\n", src);
    printf("Destination 1: %s\n", dest1);
    printf("Length of source: %u\n", length1);

    length2 = ft_strlcpy(dest2, src, sizeof(dest2));
    printf("Source: %s\n", src);
    printf("Destination 2: %s\n", dest2);
    printf("Length of source: %u\n", length2);

    return 0;
}*/
