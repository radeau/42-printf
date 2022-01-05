/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:29:17 by kpoquita          #+#    #+#             */
/*   Updated: 2022/01/03 11:29:20 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbsize(unsigned long ptr)
{
	int	i;

	i = 0;
	while (ptr > 0)
	{
		ptr /= 16;
		i++;
	}
	return (i);
}

int	ft_printhex(void *ptr, const char *str, int i)
{
	char	c;

	//c = ' ';
	if (!ptr)
	{
		write(1, "0", 1);
		return (1);
	}
	while (i > 0)
	{
		c = str[i - 1];
		ft_putchar(c);
		i--;
	}
	return (0);
}

int	ft_puthex(void *ptr)
{
	char                *str;
	unsigned long		num;
	unsigned long		mod;
	int                 i;

	str = (char *)malloc(ft_nbsize((unsigned long)ptr) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	num = (unsigned long)ptr;
    while (num != 0)
    {
        mod = num % 16;
        if (mod < 10)
            str[i] = mod + 48;
        else
            str[i] = mod + 87;
        num /= 16;
        i++;
    }
    write(1, &"0x", 2);
    i += ft_printhex(ptr, str, i);
    free(str);
    return (i + 2);
}