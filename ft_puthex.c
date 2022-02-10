/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 11:29:17 by kpoquita          #+#    #+#             */
/*   Updated: 2022/02/10 22:47:45 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbsize(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr /= 16;
	}
	return (i);
}

static void	ft_printhex(unsigned int num, const char flag)
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
			if (flag == 'x')
				ft_putchar(num - 10 + 'a');
			if (flag == 'X')
				ft_putchar(num - 10 + 'A');
		}
	}
}

int	ft_puthex(unsigned int num, const char flag)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_printhex(num, flag);
	return (ft_nbsize(num));
}
