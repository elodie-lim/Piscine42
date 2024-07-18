/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:08:47 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/08 16:40:41 by elodlim          ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	length;

	length = ft_strlen(to_find);
	if (!length)
		return (str);
	count = 0;
	while (*str)
	{
		if (*str == to_find[count])
			count++;
		else
			count = 0;
		if (count == length)
			return (str - count + 1);
		str++;
	}
	return ((void *) 0);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[] = "Test";
	char	to_find1[] = "est";
	char	to_find2[] = "hello";
	char	to_find3[] = "";
	char	*result1 = ft_strstr(str, to_find1);
	char	*result2 = ft_strstr(str, to_find2);
	char	*result3 = ft_strstr(str, to_find3);

	if (result1)
		printf("Found '%s' in '%s': '%s'\n", to_find1, str, result1);
	else
		printf("'%s' not found in '%s'\n", to_find1, str);
	if (result2)
		printf("Found '%s' in '%s': '%s'\n", to_find2, str, result2);
	else
		printf("'%s' not found in '%s'\n", to_find2, str);
	if (result3)
	printf("Found '%s' in '%s': '%s'\n", to_find3, str, result3);
	else
		printf("'%s' not found in '%s'\n", to_find3, str);

	char	*result1s = strstr(str, to_find1);
	char	*result2s = strstr(str, to_find2);
	char	*result3s = strstr(str, to_find3);
	if (result1)
		printf("With strstr: Found '%s' in '%s': '%s'\n", to_find1, str, result1s);
	else
		printf("'%s' not found in '%s'\n", to_find1, str);
	if (result2)
		printf("Found '%s' in '%s': '%s'\n", to_find2, str, result2s);
	else
		printf("'%s' not found in '%s'\n", to_find2, str);
	if (result3)
	printf("Found '%s' in '%s': '%s'\n", to_find3, str, result3s);
	else
		printf("'%s' not found in '%s'\n", to_find3, str);
	return (0);
}*/
