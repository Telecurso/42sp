/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:59:21 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/16 18:01:37 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	origem[] = "Teste de programa em C!";
	char	destino[50];

	printf("Source String: '%s'\n", origem);
	printf("Destiny BEFORE apply function: '%s'\n", destino);
	ft_strcpy(destino, origem);
	printf("Destiny AFTER apply ft_strcpy: '%s'\n", destino);
	return (0);
}
*/