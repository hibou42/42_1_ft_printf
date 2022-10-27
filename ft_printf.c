/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:44:13 by aschaefe          #+#    #+#             */
/*   Updated: 2022/10/27 16:29:50 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
//	va_list	valist;
	int		i;
	
//	va_start(valist, xxx);
//	va_end(valist);

	i = 0;
	while (input[i])
	{
		if (input[i] == '\\')
		{
			write(1, &input[i], 1);
			write(1, &input[i+1], 1);
			i += 2;
		}
		else
		{
			write(1, &input[i], 1);
			i++;
		}
	}
	return (0);
}

int main (void)
{
	printf("Coucou Hibou\nahahaha\n");
	ft_printf("Coucou Hibou\nyouhouuu\n");
	return (0);
}
