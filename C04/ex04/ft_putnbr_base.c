/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouiyeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 06:05:47 by adouiyeh          #+#    #+#             */
/*   Updated: 2023/09/03 15:41:50 by adouiyeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 127
			|| base[i] == 43
			|| base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	lnbr;
	int			blen;

	lnbr = nbr;
	blen = ft_valid_base(base);
	if (!blen)
		return ;
	if (lnbr < 0)
	{
		lnbr = -lnbr;
		write(1, "-", 1);
	}
	if (lnbr < blen)
		write(1, (&base[lnbr]), 1);
	else
	{
		ft_putnbr_base(lnbr / blen, base);
		write(1, &base[lnbr % blen], 1);
	}	
}
