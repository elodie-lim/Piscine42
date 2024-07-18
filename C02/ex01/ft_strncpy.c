/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:21:56 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/02 17:21:57 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main()
{
	char	source[] = "Chaine 2 caracteres !";
	char	destination[50];

	ft_strncpy(destination, source, 15);

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return (0);
}*/
