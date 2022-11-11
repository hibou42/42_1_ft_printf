/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschaefe <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:07:53 by aschaefe          #+#    #+#             */
/*   Updated: 2022/11/11 18:33:35 by aschaefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int				digit;
	int				i;
	char			caractere;
	char			*str = "YEAH";
	unsigned int	uint;
	float			floti;

	digit = 42;
	i = 21;
	caractere = 'a';
	uint = 543;
	floti = 42.42f;
	printf("-----START TEST-----\n");
	printf("return %d\n", printf("origin // Coucou Hibou // "));
	printf("return %d\n", ft_printf("custom // Coucou Hibou // "));
	printf("return %d\n", printf("origin // %% // "));
	printf("return %d\n", ft_printf("custom // %% // "));
	printf("return %d\n", printf("origin // digit %d // ", digit));
	printf("return %d\n", ft_printf("custom // digit %d // ", digit));
	printf("return %d\n", printf("origin // digit %i // ", i));
	printf("return %d\n", ft_printf("custom // digit %i // ", i));
	printf("return %d\n", printf("origin // caractere %c // ", caractere));
	printf("return %d\n", ft_printf("custom // caractere %c // ", caractere));
	printf("return %d\n", printf("origin // string %s // ", str));
	printf("return %d\n", ft_printf("custom // string %s // ", str));
	printf("return %d\n", printf("origin // unsig_int %u // ", uint));
	printf("return %d\n", ft_printf("custom // unsig_int %u // ", uint));
	printf("return %d\n", printf("origin // pointer %p // ", str));
	printf("return %d\n", ft_printf("custom // pointer %p // ", str));
	printf("return %d\n", printf("origin // hexa %x // ", uint));
	printf("return %d\n", ft_printf("custom // hexa %x // ", uint));
	printf("return %d\n", printf("origin // HEXA %X // ", uint));
	printf("return %d\n", ft_printf("custom // HEXA %X // ", uint));
	printf("return %d\n", printf("origin // ''fake %f'' // ", floti));
	printf("return %d\n", ft_printf("custom // ''fake %f'' // ", floti));
	printf("-----END TEST-----\n");
	return (0);
}
