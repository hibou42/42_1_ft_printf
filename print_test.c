/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:07:53 by aschaefe          #+#    #+#             */
/*   Updated: 2022/10/28 13:21:34 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main (void)
{
	int	bonjour;

	bonjour = 42;
	printf("Coucou Hibou\nahahaha\n");
	ft_printf("Coucou Hibou\nyouhouuu\n");
	printf("Coucou monsieur %d\n", bonjour);
	ft_printf("Coucou monsieur %d\n", bonjour);
	return (0);
}
