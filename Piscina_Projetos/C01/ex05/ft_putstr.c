/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plucas-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:36:22 by plucas-s          #+#    #+#             */
/*   Updated: 2025/06/09 20:06:21 by plucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*c;

	c = "Do or do not, there is no try.";
	ft_putstr(c);
	write (1, "\n", 1);
	return (0);
}
*/
