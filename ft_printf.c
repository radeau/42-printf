/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:59:00 by kpoquita          #+#    #+#             */
/*   Updated: 2022/02/10 22:37:12 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	params;
	int		i;
	int		print;

	va_start(params, format);
	i = 0;
	print = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			print += ft_parse(params, format[i + 1]);
			i++;
		}
		else
			print += ft_putchar(format[i]);
		i++;
	}
	va_end(params);
	return (print);
}
