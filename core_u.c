/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:58:19 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/11 18:47:33 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	core_u(unsigned int job)
{
	static int	i;

	if (job >= 10)
		core_u(job / 10);
	ft_putchar_fd(job % 10 + '0', 1);
	i++;
	return (i);
}
