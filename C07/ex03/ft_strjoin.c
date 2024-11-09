/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:51:59 by esir              #+#    #+#             */
/*   Updated: 2024/09/03 18:43:17 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		k;
	int		j;

	dest = (char *)malloc(sizeof(strs));
	i = 0;
	j = 0;
	while (j < size)
	{
		k = 0;
		while (strs[j][k])
		{
			dest[i++] = strs[j][k++];
		}
		k = 0;
		while (sep[k] && j != size - 1)
		{
			dest[i++] = sep[k++];
		}
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
