/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 17:56:11 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/18 17:56:15 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char	str1[] = "abc";
	char	str2[] = "";
	char	str3[] = "abc\n";

	printf("Printable: %d\n", ft_str_is_printable(str1));
	printf("Empty String: %d\n", ft_str_is_printable(str2));
	printf("Test no printable: %d\n", ft_str_is_printable(str3));
	return (0);
}
*/