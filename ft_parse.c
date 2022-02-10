/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 21:30:45 by kpoquita          #+#    #+#             */
/*   Updated: 2022/02/10 22:26:50 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(va_list params, const char flag)
{
	int	printf;

	printf = 0;
	if (flag == 'c')
		printf += ft_putchar(va_arg(params, int));
	else if (flag == 's')
		printf += ft_putstr(va_arg(params, char *));
	else if (flag == 'p')
		printf += ft_puthex_p(va_arg(params, unsigned long));
	else if (flag == 'x' || flag == 'X')
		printf += ft_puthex(va_arg(params, unsigned int), flag);
	else if (flag == 'd' || flag == 'i')
		printf += ft_putnbr(va_arg(params, int));
	else if (flag == 'u')
		printf += ft_putnbr_u(va_arg(params, unsigned int));
	else if (flag == '%')
		printf += ft_putchar('%');
	return (printf);
}
