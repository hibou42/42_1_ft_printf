/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:58:04 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/11 18:17:56 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *input, ...);
int	core_c(int job);
int	core_s(char *str);
int	core_di(int job);
int	core_u(unsigned int job);
int	core_p(unsigned long long job);
int	core_x(unsigned int nbr);
int	core_xx(unsigned int nbr);
int	ft_puthex(unsigned long long nbr);

#endif
