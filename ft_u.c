/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:58:19 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/05 17:34:14 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u(unsigned int job)
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
	return (i - 1);
 }
