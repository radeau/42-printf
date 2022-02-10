/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:15:34 by kpoquita          #+#    #+#             */
/*   Updated: 2022/02/10 23:19:40 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_nbsize(unsigned int nbr)
{
	int	size;

	size = 0;
	if (nbr == 0)
		size++;
	while (nbr > 0)
	{
		size++;
		nbr /= 10;
	}
	return (size);
}

int	ft_putnbr_u(unsigned int nbr)
{
	int	num_size;

	num_size = ft_nbsize(nbr);
	if (nbr >= 10)
		ft_putnbr_u(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
	return (num_size);
}
