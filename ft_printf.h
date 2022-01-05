/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:00:45 by kpoquita          #+#    #+#             */
/*   Updated: 2021/12/28 17:04:35 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int     ft_printf(const char *format, ...);
int	    ft_parse(va_list params, const char flag);
int     ft_putchar(char c);
int     ft_putstr(char *str);
int     ft_puthex(void *ptr);

#endif
