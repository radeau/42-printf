#include "ft_printf.h"

static int	ft_nbsize(unsigned long nbr)
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

static void	ft_printhex(unsigned long num)
{
	if (num >= 16)
	{
		ft_printhex(num / 16);
		ft_printhex(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int		ft_puthex_p(unsigned long num)
{
	int len;

	len = 0;
	if (num == 0)
		return (write(1, "0", 1));
	else
        write(1, "0x", 2);
        ft_printhex(num);
        len = ft_nbsize(num);
    return (len + 2);
}