/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:51:14 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/04 18:00:58 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_di(int job)
{
	int	i;
	char *res;

	res = ft_itoa(job);
	i = 0;
	while (res[i])
	{
		ft_putchar_fd(res[i], 1);
		i++;
	}
	return (i - 1);
}