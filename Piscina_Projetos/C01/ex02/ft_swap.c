/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 12:40:22 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/09 13:44:47 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 10;
	n2 = 30;
	printf("Before swap:\nn1 = %d | n2 = %d\n\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("After swap:\nn1 = %d | n2 = %d\n", n1, n2);
}
*/