/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:44:13 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/04 18:07:59 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	if_forest(char c, va_list valist)
{
	int	i;

	i = 1;
	if (c == 'c')
		i += ft_c(va_arg(valist, int));
	else if (c == 's')
		i += ft_s(va_arg(valist, char *));
//	else if (c == 'p')
//		i += ft_p(va_arg(valist, void *));
	else if (c == 'd')
		i += ft_di(va_arg(valist, int));
	else if (c == 'i')
		i += ft_di(va_arg(valist, int));
//	else if (c == 'u')
//		i += ft_u;
//	else if (c == 'x')
//		i += ft_x;
//	else if (c == 'X')
//		i += ft_X;
	else
	{
		ft_putchar_fd(c, 1);
		i++;
	}
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list		valist;
	int			i;
	int			res;
	
	va_start(valist, input);
	i = 0;
	res = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			res += if_forest(input[i + 1], valist); 
			i += 2;
		}
		else
		{
			ft_putchar_fd(input[i], 1);
			i++;
			res++;
		}
	}
	va_end(valist);
	return (res);
}
