/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:50:03 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/09 14:15:56 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	n1;
	int	n2;
	int	dresult;
	int	dremain;

	n1 = 42;
	n2 = 2;
	ft_div_mod(n1, n2, &dresult, &dremain);
	printf("%d / %d = %d\n", n1, n2, dresult);
	printf("Division remainder is: %d", dremain);
}
*/