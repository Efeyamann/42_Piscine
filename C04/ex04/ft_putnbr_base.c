/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:27:54 by esir              #+#    #+#             */
/*   Updated: 2024/09/03 12:46:18 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	basecheck(char *base)
{
	int	a;
	int	b;

	a = 0;
	if (base[0] == '\0' || ft_strlen(base) == 1)
		return (0);
	while (base[a])
	{
		if (base[a] == '-' || base[a] == '+')
			return (0);
		a++;
	}
	a = 0;
	while (a < ft_strlen(base))
	{
		b = a + 1;
		while (b < ft_strlen(base))
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		sbase;

	sbase = ft_strlen(base);
	if (base == NULL)
		return ;
	if (basecheck(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
		{
			ft_putnbr_base(2147483648 / sbase, base);
			write(1, &base[2147483648 % sbase], 1);
			return ;
		}
		nbr = -nbr;
	}
	if (nbr < sbase)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	ft_putnbr_base(nbr / sbase, base);
	write(1, &base[nbr % sbase], 1);
}
