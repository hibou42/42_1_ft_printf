/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <aschaefe@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:44:05 by aschaefe          #+#    #+#             */
/*   Updated: 2022/09/12 23:03:00 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************
	Determines if an integer is an alphabetical character
		Return : 
			the input if right
			0 if false
******************************************************************************/

#include "libft.h"

int	ft_isalpha(int nb)
{
	if ((nb >= 'a' && nb <= 'z') || (nb >= 'A' && nb <= 'Z'))
		return (nb);
	else
		return (0);
}
