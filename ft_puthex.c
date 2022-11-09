/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:21:49 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/09 13:36:25 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr)
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
			ft_putchar_fd((nbr - 10) + 'a', 1);
	}
	return (res);
}
