/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouiyeh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:42:04 by adouiyeh          #+#    #+#             */
/*   Updated: 2023/09/05 01:58:05 by adouiyeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (!power && !nb)
		return (1);
	if (power < 0)
		return (0);
	while (power--)
		r *= nb;
	return (r);
}
