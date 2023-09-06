/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouiyeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 22:58:23 by adouiyeh          #+#    #+#             */
/*   Updated: 2023/09/06 02:22:54 by adouiyeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;	
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
