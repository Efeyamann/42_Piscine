/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:01:39 by esir              #+#    #+#             */
/*   Updated: 2024/09/02 16:51:00 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	b;
	int	i;
	int	a;

	i = 0;
	a = 1;
	b = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			a *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		b = (b * 10) + (str[i] - '0');
		i++;
	}
	return (a * b);
}