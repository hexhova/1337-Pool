/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouiyeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 02:26:06 by adouiyeh          #+#    #+#             */
/*   Updated: 2023/09/06 14:44:31 by adouiyeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bnd;
	int		i;
	int		*buf;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bnd = max - min;
	d = (buf = malloc(bnd * sizeof(int)));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = buf;
	i = 0;
	while (i < bnd)
	{
		buf[i] = min + i;
		i++;
	}
	return (bnd);
}
