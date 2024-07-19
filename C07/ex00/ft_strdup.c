/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:29:15 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/17 14:53:19 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*dest;

	length = ft_strlen(src);
	dest = malloc((length + 1) * sizeof(char));
	ft_strcpy(dest, src);
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *original = "Test";
	char *duplicate = strdup(original);
	char *dup = ft_strdup(original);

	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", duplicate);
	printf("Ft_strdup: %s\n", dup);

	free(duplicate);
	free(dup);
}*/
