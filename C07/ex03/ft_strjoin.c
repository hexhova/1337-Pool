/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouiyeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:34:01 by adouiyeh          #+#    #+#             */
/*   Updated: 2023/09/06 22:05:33 by adouiyeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
}

int	ft_str_size(int size, char **strs, char *sep)
{
	int	i;
	int	strs_len;
	int	sep_len;

	i = 0;
	strs_len = 0;
	sep_len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	return (strs_len + sep_len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;

	res = (char *)malloc(sizeof(char) * ft_str_size(size, strs, sep));
	res[0] = 0;
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
