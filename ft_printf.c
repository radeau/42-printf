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
/*
int main()
{
	//char a = 'I';
	// int a = 30;
	// char *str;

	// str = "Are you ready?";
	// ft_printf("%s\n", str);
	// ft_printf("%c\n", a);
	// ft_printf("am ready\n");
	// ft_printf("%p\n", &str);
	// printf("%p\n", &str);
	// ft_printf("ft_printf ==> %x\n", a);
	// printf("printf ==>    %x\n", a);
    printf("%ld\n", LONG_MAX);
    int ft = ft_printf("ft long max %x\n", LONG_MAX);
	int p = printf("long max %x\n", LONG_MAX);
	// ft_printf("ft long min %x\n", LONG_MIN);
	// printf("long min %x\n", LONG_MIN);

    printf("ft = %d | p = %d\n", ft, p);

	// ft_printf("%d",-1);
    // printf(" = printf %d\n", -1);
    // ft_printf("%d",1);
    // printf(" = printf %d\n", 1);
    // ft_printf("%d",9);
    // printf(" = printf %d\n", 9);
    // ft_printf("%d",10);
    // printf(" = printf %d\n", 10);
    // ft_printf("%d",11);
    // printf(" = printf %d\n", 11);
    // ft_printf("%d",15);
    // printf(" = printf %d\n", 15);
    // ft_printf("%d",16);
    // printf(" = printf %d\n", 16);
    // ft_printf("%d",17);
    // printf(" = printf %d\n", 17);
    // ft_printf("%d",99);
    // printf(" = printf %d\n", 99);
    // ft_printf("%d",100);
    // printf(" = printf %d\n", 100);
    // ft_printf("%d",101);
    // printf(" = printf %d\n", 101);
    // ft_printf("%d",-9);
    // printf(" = printf %d\n", -9);
    // ft_printf("%d",-10);
    // printf(" = printf %d\n", -10);
    // ft_printf("%d",-11);
    // printf(" = printf %d\n", -11);
    // ft_printf("%d",-14);
    // printf(" = printf %d\n", -14);
    // ft_printf("%d",-15);
    // printf(" = printf %d\n", -15);
    // ft_printf("%d",-16);
    // printf(" = printf %d\n", -16);
    // ft_printf("%d",-99);
    // printf(" = printf %d\n", -99);
    // ft_printf("%d",-100);
    // printf(" = printf %d\n", -100);
    // ft_printf("%d",-101);
    // printf(" = printf %d\n", -101);
    // ft_printf("%d",INT_MAX);
    // printf(" = printf %d\n", INT_MAX);
    // ft_printf("%d",INT_MIN);
    // printf(" = printf %d\n", INT_MIN);
    // ft_printf("%d",LONG_MIN);
    // printf(" = printf %ld\n", LONG_MIN);
    // ft_printf("%d",LONG_MAX);
    // printf(" = printf %ld\n", LONG_MAX);
    // int f, p = 0;
    // f = ft_printf("%d", -10);
    // printf("\tft_print\n");
    // printf("%d", f);
    // printf("\treturn value\n");
    // p = printf("%d", -10);
    // printf("\tprint_standard\n");
    // printf("%d", p);
    // printf("\treturn value\n");

	return (0);
}
*/