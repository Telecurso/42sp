/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:03:51 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/18 16:04:00 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char	str1[] = "teste";
	char	str2[] = "tesTE";
	char	str3[] = "";

	printf("lowercase: %d\n", ft_str_is_lowercase(str1));
	printf("lowercase mixed uppercase: %d\n", ft_str_is_lowercase(str2));
	printf("empty string: %d\n", ft_str_is_lowercase(str3));
	return (0);
}
*/