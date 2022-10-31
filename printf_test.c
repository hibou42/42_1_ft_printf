/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:07:53 by aschaefe          #+#    #+#             */
/*   Updated: 2022/10/29 18:03:17 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main (void)
{
	int	digit;
	char	caractere;

	digit = 42;
	caractere = 'a';
	printf("-----START TEST-----\n");
	printf("return %d\n", printf("origin // Coucou Hibou // "));
	printf("return %d\n", ft_printf("custom // Coucou Hibou // "));
	printf("return %d\n", printf("origin // digit %d // ", digit));
	printf("return %d\n", ft_printf("custom // digit %d // ", digit));
	printf("return %d\n", printf("origin // caractere %c // ", caractere));
	printf("return %d\n", ft_printf("custom // caractere %c // ", caractere));
	printf("-----END TEST-----\n");
	return (0);
}
