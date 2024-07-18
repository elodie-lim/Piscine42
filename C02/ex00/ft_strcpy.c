/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:25:16 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/02 15:25:19 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*#include <stdio.h>

int	main()
{
	char	source[] = "Chaine 2 caracteres !";
	char	destination[50];

	ft_strcpy(destination, source);

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return (0);
}*/
