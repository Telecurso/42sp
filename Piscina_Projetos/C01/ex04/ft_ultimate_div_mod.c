/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:15:45 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/09 18:54:40 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	if (*b != 0)
	{
		*a = *a / *b;
		*b = temp % *b;
	}

}
/*-------------------->Main function below using 'Printf'<-------------*/
int	main(void)
{
	int	num_a;
	int	num_b;

	num_a = 10;
	num_b = 2;
	printf("%d / %d:\n", num_a, num_b);
	ft_ultimate_div_mod(&num_a, &num_b);
	if (ft_ultimate_div_mod(&num_a, &num_b) == 0)
	{
	printf ("Resultado divisão: %d | Resto divisão: %d", num_a, num_b);
	}
	else
	{
	printf ("Não é possível realizar divisão por: %d", num_b);
	}
}