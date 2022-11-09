/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:58:04 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/09 12:37:26 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *input, ...);
int	ft_c(int job);
int	ft_s(char *str);
int	ft_di(int job);
int	ft_u(unsigned int job);
int	ft_p(unsigned long long job);

#endif
