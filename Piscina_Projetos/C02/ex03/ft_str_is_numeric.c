/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:47:27 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/18 13:47:33 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
	char str1[] = "Teste";
	char str2[] = "012345";
	char str3[] = "";

	printf("Alpha: %d\n", ft_str_is_numeric(str1));
	printf("Numbers: %d\n", ft_str_is_numeric(str2));
	printf("Empty String: %d\n", ft_str_is_numeric(str3));
	return(0);
}
*/