/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:33:55 by tgmelin           #+#    #+#             */
/*   Updated: 2024/04/21 15:54:27 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_modifier(int _fd, va_list _args, char _modifier, char *_err)
{
	int	out;

	out = -1;
	if (_modifier == '%')
		out = dpf_putchr(_fd, '%');
	else if (_modifier == 'c')
		out = dpf_putchr(_fd, va_arg(_args, int));
	else if (_modifier == 'd' || _modifier == 'i')
		out = dpf_putnbr_base(_fd, va_arg(_args, int), "0123456789");
	else if (_modifier == 'u')
		out = dpf_putnbr_base(_fd, va_arg(_args, unsigned int), "0123456789");
	else if (_modifier == 'x')
		out = dpf_putnbr_base(_fd, va_arg(_args, unsigned int),
				"0123456789abcdef");
	else if (_modifier == 'X')
		out = dpf_putnbr_base(_fd, va_arg(_args, unsigned int),
				"0123456789ABCDEF");
	else if (_modifier == 's')
		out = dpf_putstr(_fd, va_arg(_args, char *));
	else if (_modifier == 'p')
		out = dpf_putptr(_fd, va_arg(_args, void *));
	if (out == -1)
		return (*_err = 1, 0);
	return (out);
}

int	ft_dprintf(int _fd, const char *_format, ...)
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
			v.sum += handle_modifier(_fd, v.args, _format[++v.i], &v.err);
			if (v.err)
				return (va_end(v.args), -1);
		}
		else
		{
			if (write(_fd, &_format[v.i], 1) == -1)
				return (-1);
			v.sum++;
		}
		v.i++;
	}
	return (va_end(v.args), v.sum);
}
