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

void	ft_printhex(unsigned long int num, const char flag)
{
	if (num >= 16)
	{
		ft_printhex(num / 16, flag);
		ft_printhex(num % 16, flag);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
		{
			if (flag == 'x' || flag == 'p')
				ft_putchar(num - 10 + 'a');
			if (flag == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

int		ft_puthex(unsigned int num, const char flag)
{
	int len;

	len = 0;
	if (num == 0)
		return (write(1, "0", 1));
	if (flag == 'p')
	{
		write(1, "0x", 2);
		ft_printhex(num, flag);
		len = ft_nbsize(num);
		return (len + 2);
	}
	else
		ft_printhex(num, flag);
	return (ft_nbsize(num));
}