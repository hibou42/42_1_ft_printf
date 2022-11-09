/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:35:01 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/09 13:35:13 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	core_p(unsigned long long job)
{
	int	i;
	char	*ptr;
	
	ptr = ft_itoa(job);
	write(1, "0x", 2);
	i = 0;
//	ft_putnbr_fd(nb / 16, 1);
//	ft_putnbr_fd(nb % 16, 1);
	while (ptr[i])
	{
		ft_putchar_fd(ptr[i], 1);
		i++;
	}
	return (i + 2);
}
