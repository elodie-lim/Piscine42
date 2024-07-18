/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:01:41 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/04 14:50:14 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return ((unsigned char) *s1 - (unsigned char) *s2);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "Test";
	char	*str2 = "Diff";
	int	result = ft_strcmp(str, str2);

	printf("Result of comparison: %d\n", result);
	printf("%d\n", strcmp(str, str2));
	return (0);
}*/
