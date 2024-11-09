/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:09:14 by esir              #+#    #+#             */
/*   Updated: 2024/09/03 18:40:27 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		j;
	int		*dest;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *)malloc((max - min) * sizeof(int));
	if (dest == NULL)
		return (-1);
	i = 0;
	j = 0;
	while (i + min < max)
	{
		dest[j++] = min + i;
		i++;
	}
	*range = dest;
	return (max - min);
}
