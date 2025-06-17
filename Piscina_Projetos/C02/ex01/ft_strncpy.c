/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:53:37 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/17 16:14:34 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int 	main(void)
{
	printf("--- Teste 1: Origem < n ---\n");
	char	origem1[] = "abc";
	char	destino1[10];
	unsigned int n1 = 5;

	printf("Origem: '%s'\n", origem1);
	printf("Destino antes ft_strncpy(..., 5): '%s'\n", destino1);
	ft_strncpy(destino1, origem1, n1);
	printf("Destino após ft_strncpy(..., 5): '%s'\n", destino1);

	printf("--- Teste 2: Origem > n ---\n");
	char	origem2[] = "Teste source maior que n";
	char	destino2[25];
	unsigned int n2 = 5;

	printf("Origem: '%s'\n", origem2);
	ft_strncpy(destino2, origem2, n2);
	printf("Destino após ft_strncpy(..., 5): '%s'\n", destino2);
	return (0);
}
*/