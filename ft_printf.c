/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:44:13 by aschaefe          #+#    #+#             */
/*   Updated: 2022/10/28 13:26:38 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	valist;
	int		i;
	
	va_start(valist, input);
	i = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			write(1, "%", 1);
			i++;
		}
		else
		{
			ft_putchar_fd(input[i], 1);
			i++;
		}
	}
	va_end(valist);
	return (i);
}
