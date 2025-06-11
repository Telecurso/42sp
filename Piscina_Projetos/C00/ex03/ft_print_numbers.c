/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:52:11 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/02 19:43:54 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	dig;

	dig = 48;
	while (dig <= 57)
	{
		write (1, &dig, 1);
		dig++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/
