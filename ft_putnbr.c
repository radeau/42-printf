#include "ft_printf.h"

static int  ft_nbsize(int nbr)
{   
    int size;

    size = 0;
    if (nbr <= 0)
	{
		nbr *= -1;
		size++;
	}

	while(nbr > 0)
	{
		size++;
		nbr /= 10;
	}
    return (size);
}

int    ft_putnbr(int nbr)
{
    int num_size;

	num_size = ft_nbsize(nbr);
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}

    if (nbr < 0)
    {
        write(1, "-",1);
        nbr *= -1;
    }

	if (nbr >= 10)
        ft_putnbr(nbr / 10);
    write(1, &"0123456789"[nbr % 10], 1);
     
	 return (num_size);
}