/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:00:19 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/08 14:07:38 by elodlim          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_length;

	dest_length = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[50] = "Test";
	char	str2[] = "Concatenation";
	char	str3[50] = "Test2";
	unsigned int nb = 6;

	ft_strncat(str, str2, nb);
	printf("Resultat avec ft_strncat : %s\n", str);
	printf("Resultat avec strncat : %s\n", strncat(str3, str2, nb));
	return (0);
}*/
