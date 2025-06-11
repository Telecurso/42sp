/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:52:33 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/02 19:45:39 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	za;

	za = 'z';
	while (za >= 'a')
	{
		write (1, &za, 1);
		za--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
