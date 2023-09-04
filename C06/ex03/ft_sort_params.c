/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouiyeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 03:10:31 by adouiyeh          #+#    #+#             */
/*   Updated: 2023/09/04 15:06:09 by adouiyeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int ac, char **av)
{
	int		i;
	char	*swp;

	i = 1;
	while (i < ac)
	{
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				swp = av[i + 1];
				av[i + 1] = av[i];
				av[i] = swp;
			}
			i++;
		}
		i = 1;
		ac--;
	}
	i = 1;
	while (av[i])
	{
		ft_putstr(av[i]);
		i++;
	}
}
