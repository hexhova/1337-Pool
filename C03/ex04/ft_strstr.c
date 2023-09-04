/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouiyeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:00:43 by adouiyeh          #+#    #+#             */
/*   Updated: 2023/08/28 15:12:31 by adouiyeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		while (str[i + j] && str[i + j] == to_find[j])
		{
			j++;
			if (!to_find[j])
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
