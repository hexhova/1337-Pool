/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouiyeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:10:49 by adouiyeh          #+#    #+#             */
/*   Updated: 2023/08/23 01:26:40 by adouiyeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	ch;

	if (nb < 0)
	{	
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		nb = -nb;
		write(1, "-", 1);
	}
	ch = (nb % 10) + '0';
	if (nb / 10)
	{
		ft_putnbr(nb / 10);
	}
	write(1, &ch, 1);
}
