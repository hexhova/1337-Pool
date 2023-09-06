/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouiyeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:34:01 by adouiyeh          #+#    #+#             */
/*   Updated: 2023/09/06 16:03:25 by adouiyeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strs_len;
	int 	sep_len;
	char	*res;

	i = 0;
	strs_len = 0;
	sep_len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	strs_len += sep_len + 1;
	res = (char *)malloc(sizeof(char) * strs_len);
	if (!res)
		return (NULL);
	while (


	
}

int main()
{
	char sep[] = "yo";
	char *strs[] = {"wq", "as"};
	printf("%d", ft_strjoin(2, strs, sep));
}
