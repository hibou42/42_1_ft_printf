/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:58:19 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/09 12:08:41 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	core_u(unsigned int job)
{
	int	i;
	char	*res;

	res = ft_itoa(job);
	i = 0;

	while (res[i])
	{
		ft_putchar_fd(res[i], 1);
		i++;
	}
	return (i);
 }
