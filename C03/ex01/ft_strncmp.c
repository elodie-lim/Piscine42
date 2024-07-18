/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elodlim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:23:22 by elodlim           #+#    #+#             */
/*   Updated: 2024/07/04 15:01:11 by elodlim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				answer;
	unsigned int	i;

	answer = 0;
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			answer = s1[i] - s2[i];
			break ;
		}
	}
	if (answer == 0 && i < n)
		answer = s1[i] - s2[i];
	if (answer == 0)
		return (0);
	else if (answer > 0)
		return (1);
	else
		return (-1);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Test pour tester";
	char	str2[] = "Test pour comparer";
	char	test[] = "i";
	char	test2[] = "t";
	unsigned int	n = 35;
	int	result = ft_strncmp(str, str2, n);

	printf("Result: %d\n", result);
	printf("Result: %d\n", strncmp(str, str2, n));
	printf("Result: %d\n", strncmp(test, test2, n));
	return (0);
}*/
