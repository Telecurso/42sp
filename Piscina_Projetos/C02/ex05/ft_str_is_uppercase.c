/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 20:05:56 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/18 20:06:00 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str1[] = "MATRIX";
	char	str2[] = "SPiderman";
	char	str3[] = "";

	printf("Uppercase: %d\n", ft_str_is_uppercase(str1));
	printf("Mixed Uppercase: %d\n", ft_str_is_uppercase(str2));
	printf("Empty String: %d\n", ft_str_is_uppercase(str3));
	return (0);
}
*/