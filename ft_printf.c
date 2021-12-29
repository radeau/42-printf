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
#include <stdio.h>
//#include "libft.h"
//parse means to break something down into its parts

int	ft_parse(va_list params, const char flag)
{
	//flags to convert cspdiuxX%
	//if flag == 'c' print putchar
	//if flag == 's' print string
	//if flag == 'p' print pointers in hex
	//if flag == 'd' print decimals in base(10)
	//if flag == 'i' print integers in base(10)
	int printf;

	printf = 0;
	if (flag == 'c')
		printf += ft_putchar(va_arg(params, int));
	else if (flag == 's')
		printf += ft_putstr(va_arg(params, char *));
	return (printf);
}

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


int main()
{
	char a = 'I';
	char *str;

	str = "Are you ready?";
	ft_printf("%s\n", str);
	ft_printf("%c\n", a);
	ft_printf("am ready\n");
	
	return (0);
}
