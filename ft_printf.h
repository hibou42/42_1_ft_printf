/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:30:20 by aschaefe          #+#    #+#             */
/*   Updated: 2022/10/28 13:04:35 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRINTF_H
# define PRINTF_H

#include "./libft/libft.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *input, ...);

/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
*/

#endif