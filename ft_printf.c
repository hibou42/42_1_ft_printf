/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:44:13 by aschaefe          #+#    #+#             */
/*   Updated: 2022/10/29 18:06:17 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//	cspdiuxX%

void	if_forest(const char *input, int i, char *test)
{
	int	i2;

	i2 = 0;
	if (input[i] == 'c')
	{
		write(1, &test, 1);
	}
	if (input[i] == 's')
	{
//		ft_str
	}
	if (input[i] == 'p')
	{
//		ft_ptr
	}
	if (input[i] == 'd')
	{
		while (test[i])
		{
			write(1, &test[i2], 1);
			i2++;
		}
	}
	if (input[i] == 'i')
	{
//		ft_itrerativ
	}
	if (input[i] == 'u')
	{
//		ft_ubicon
	}
	if (input[i] == 'x')
	{
//		ft_xolicom
	}
	if (input[i] == 'X')
	{
//		ft_bigxoli
	}
}

int ft_test(const char *input, int i, char test)
{
	if (input[i] == 'c')
	{
		write(1, &test, 1);
		i++;
	}
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list		valist;
	int		i;
	int		res;
	
	va_start(valist, input);
	i = 0;
	res = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			if_forest(input, i + 1, va_arg(valist, int)); 
			i += 2;
			res++;
//			i = ft_test(input, i + 1, va_arg(valist, int));
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
