/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:59:00 by kpoquita          #+#    #+#             */
/*   Updated: 2021/12/29 12:05:39 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <stdio.h>
// #include <limits.h>

int	ft_printf(const char *format, ...)
{
	va_list params;
	int	i;
	int print;

	va_start(params, format);
	i = 0;
	print = 0;
	//while format != null
	//process the flags after '%'
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

// int main()
// {
// 	//char a = 'I';
// 	int a = 30;
// 	char *str;

// 	str = "Are you ready?";
// //	ft_printf("%s\n", str);
// //	ft_printf("%c\n", a);
// //	ft_printf("am ready\n");
// 	ft_printf("%p\n", &str);
// 	printf("%p\n", &str);
// 	// ft_printf("ft_printf ==> %x\n", a);
// 	// printf("printf ==>    %x\n", a);
// 	ft_printf("ft long max %p\n", LONG_MAX);
// 	printf("long max %p\n", LONG_MAX);
// 	ft_printf("ft long min %p\n", LONG_MIN);
// 	printf("long min %p\n", LONG_MIN);
// 	return (0);
// }
