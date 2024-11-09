/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:17:22 by esir              #+#    #+#             */
/*   Updated: 2024/09/02 11:27:53 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writenumber(int number)
{
	char	x;

	x = number + '0';
	write(1, &x, 1);
}

void	divide(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		writenumber(nb);
		return ;
	}
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		divide(-nb);
		return ;
	}
	divide(nb / 10);
	writenumber(nb % 10);
}

void	ft_putnbr(int nb)
{
	divide(nb);
}
