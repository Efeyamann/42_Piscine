/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:53:09 by esir              #+#    #+#             */
/*   Updated: 2024/08/18 05:38:29 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sayiyiyaz(int basamak)
{
	char	x;

	x = basamak + '0';
	write(1, &x, 1);
}

void	basamaklarayirma(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		sayiyiyaz(nb);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		basamaklarayirma(-nb);
		return ;
	}
	basamaklarayirma(nb / 10);
	sayiyiyaz(nb % 10);
}

void	ft_putnbr(int nb)
{
	basamaklarayirma(nb);
}
