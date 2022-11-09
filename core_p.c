/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:35:01 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/09 14:20:25 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	core_p(unsigned long long job)
{
	int	i;
	
	write(1, "0x", 2);
	i = ft_puthex(job);
	return (i + 2);
}
