/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:56:34 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/04 21:03:58 by elodlim          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	dest_length;
	int	i;

	i = 0;
	dest_length = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Test";
    char str2[] = "Concatenation";
    

    char std_str1[50] = "Test";
    strcat(std_str1, str2);
    printf("Resultat avec strcat: %s\n", std_str1);
    

    ft_strcat(str1, str2);
    printf("Resultat avec ft_strcat: %s\n", str1);
    
    return 0;
}*/
