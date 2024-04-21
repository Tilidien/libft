/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:33:55 by tgmelin           #+#    #+#             */
/*   Updated: 2024/04/21 15:11:54 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	handle_modifier(va_list _args, char _modifier, char *_err)
{
	int	out;

	out = -1;
	if (_modifier == '%')
		out = pf_putchr('%');
	else if (_modifier == 'c')
		out = pf_putchr(va_arg(_args, int));
	else if (_modifier == 'd' || _modifier == 'i')
		out = pf_putnbr_base(va_arg(_args, int), "0123456789");
	else if (_modifier == 'u')
		out = pf_putnbr_base(va_arg(_args, unsigned int), "0123456789");
	else if (_modifier == 'x')
		out = pf_putnbr_base(va_arg(_args, unsigned int), "0123456789abcdef");
	else if (_modifier == 'X')
		out = pf_putnbr_base(va_arg(_args, unsigned int), "0123456789ABCDEF");
	else if (_modifier == 's')
		out = pf_putstr(va_arg(_args, char *));
	else if (_modifier == 'p')
		out = pf_putptr(va_arg(_args, void *));
	if (out == -1)
	{
		*_err = 1;
		return (0);
	}
	return (out);
}

int	ft_printf(const char *_format, ...)
{
	t_printf_vars	v;

	va_start(v.args, _format);
	v.err = 0;
	v.i = 0;
	v.sum = 0;
	while (_format[v.i])
	{
		if (_format[v.i] == '%')
		{
			v.sum += handle_modifier(v.args, _format[++v.i], &v.err);
			if (v.err)
				return (va_end(v.args), -1);
		}
		else
		{
			if (write(1, &_format[v.i], 1) == -1)
				return (-1);
			v.sum++;
		}
		v.i++;
	}
	return (va_end(v.args), v.sum);
}
