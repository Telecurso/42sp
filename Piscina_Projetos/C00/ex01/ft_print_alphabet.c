/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:14:16 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/02 19:49:05 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	az;

	az = 'a';
	while (az <= 'z')
	{
		write(1, &az, 1);
		az++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}
*/
