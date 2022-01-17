#include "ft_printf.h"

static int  display_nbr(int n)
{   
    if (n >= 10)
            display_nbr(n/10);
    write(1, &"0123456789"[n%10],1);
    return (i);
}

int    ft_putnbr(int n)
{
    int num_size;

    num_size = display_nbr(n);
    if (n < 0)
    {
        write(1, "-",1);
        if (n == -2147483648)
        {
        write(1, "-2147483648", 11);
        return (11);
        }
        n *= -1;
    }
     
    return (num_size);
}

//**********************NOTES**********************//
//need to fix the return value of the the putnbr
//**********************NOTES**********************//
