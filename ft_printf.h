/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:30:20 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/04 18:03:31 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRINTF_H
# define PRINTF_H

#include "./libft/libft.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *input, ...);
int	ft_c(int job);
int ft_s(char * str);
int ft_di(int job);

/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
*/

#endif