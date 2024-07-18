/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:41:57 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/08 19:17:22 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	length = ft_strlen(dest);
	i = 0;
	while (length + i + 1 < size && src[i])
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	if (length <= size)
		return (length + ft_strlen(src));
	return (size + ft_strlen(src));
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char dest1[50] = "Test";
    char src1[] = "Concatenation";
    unsigned int size1 = 5;

    unsigned int result1 = ft_strlcat(dest1, src1, size1);
    printf("Utilisation de ft_strlcat:\n");
    printf("Destination: %s\n", dest1);
    printf("Longueur totale: %u\n", result1);
    return 0;
}*/
