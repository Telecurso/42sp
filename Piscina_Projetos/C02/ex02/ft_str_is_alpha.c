/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:49:18 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/17 16:49:22 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
	str++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "abacate";
	char str2[] = "star wars";
	char str3[] = "5t4r w4r5";
	char str4[] = "";

	printf("teste: %s\n", str1);
	printf("Only alpha : %d\n", ft_str_is_alpha(str1));
	printf("Alpha with space : %d\n", ft_str_is_alpha(str2));
	printf("Mixed alpha and numbers : %d\n", ft_str_is_alpha(str3));
	printf("Empty String : %d\n", ft_str_is_alpha(str4));

    return (0);
}
*/