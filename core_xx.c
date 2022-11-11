/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_xx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:21:07 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/11 12:51:19 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	core_xx(unsigned int nbr)
{
	int	res;

	res = 0;
	if (nbr >= 16)
	{
		res += ft_puthex(nbr / 16);
		res += ft_puthex(nbr % 16);
	}
	if (nbr < 16)
	{
		res++;
		if (nbr <= 9)
			ft_putchar_fd(nbr + '0', 1);
		else
			ft_putchar_fd((nbr - 10) + 'X', 1);
	}
	return (res);
}
