/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:07:53 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/05 17:39:55 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main (void)
{
	int		digit;
	int		i;
	char		caractere;
	char		*str = "YEAH";
	unsigned int	uint;
	
	digit = 42;
	i = 21;
	caractere = 'a';
	uint = 84;
	printf("-----START TEST-----\n");
	printf("return %d\n", printf("origin // Coucou Hibou // "));
	printf("return %d\n", ft_printf("custom // Coucou Hibou // "));
	printf("return %d\n", printf("origin // digit %d // ", digit));
	printf("return %d\n", ft_printf("custom // digit %d // ", digit));
	printf("return %d\n", printf("origin // digit %i // ", i));
	printf("return %d\n", ft_printf("custom // digit %i // ", i));
	printf("return %d\n", printf("origin // caractere %c // ", caractere));
	printf("return %d\n", ft_printf("custom // caractere %c // ", caractere));
	printf("return %d\n", printf("origin // string %s //", str));
	printf("return %d\n", ft_printf("custom // string %s //", str));
	printf("return %d\n", printf("origin // unsig_int %u //", uint));
	printf("return %d\n", ft_printf("custom // unsig_int %u //", uint));
	printf("return %d\n", printf("origin // pointer %p //", str));
	printf("return %d\n", ft_printf("custom // pointer %p //", str));
	printf("-----END TEST-----\n");
	return (0);
}
