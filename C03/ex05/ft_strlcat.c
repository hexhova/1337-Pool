/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouiyeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:46:27 by adouiyeh          #+#    #+#             */
/*   Updated: 2023/08/28 16:18:05 by adouiyeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	i = 0;
	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	j = dl;
	if (size == 0 || size <= dl)
		return (size + sl);
	while (src[i] && i < (size - 1) - dl)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dl + sl);
}
