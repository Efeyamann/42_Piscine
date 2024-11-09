/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:45:07 by esir              #+#    #+#             */
/*   Updated: 2024/09/04 13:51:02 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		j;
	int		*dest;

	if (min >= max)
		return (0);
	dest = (int *)malloc((max - min) * sizeof(int));
	if (dest == NULL)
		return (NULL);
	i = min;
	j = 0;
	while (i < max)
	{
		dest[j] = i;
		j++;
		i++;
	}
	return (dest);
}
