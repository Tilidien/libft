/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:33:58 by tgmelin           #+#    #+#             */
/*   Updated: 2024/04/21 15:58:01 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	dpf_putnbr_base(int _fd, ssize_t _num, char *_base)
{
	t_putnbr_base_vars	v;

	v.out = 0;
	v.baselen = 0;
	while (_base[v.baselen])
		v.baselen++;
	v.num = (size_t)_num;
	if (_num < 0)
	{
		v.out++;
		if (write(_fd, "-", 1) == -1)
			return (-1);
		v.num = (size_t)(-1 * (_num + 1)) + 1;
	}
	if (v.num >= (size_t)v.baselen)
	{
		_num = dpf_putnbr_base(_fd, v.num / v.baselen, _base);
		if (_num == -1)
			return (-1);
		v.out += _num;
	}
	if (write(_fd, &_base[v.num % v.baselen], 1) == -1)
		return (-1);
	return (++v.out);
}

int	dpf_putunbr_base(int _fd, size_t _num, char *_base)
{
	size_t	baselen;
	int		out;
	int		temp;

	if (!_base)
		return (-1);
	out = 0;
	baselen = 0;
	while (_base[baselen])
		baselen++;
	if (_num >= baselen)
	{
		temp = dpf_putnbr_base(_fd, _num / baselen, _base);
		if (temp == -1)
			return (-1);
		out += temp;
	}
	if (write(_fd, &_base[_num % baselen], 1) == -1)
		return (-1);
	return (++out);
}

int	dpf_putchr(int _fd, char _c)
{
	if (write(_fd, &_c, 1) == -1)
		return (-1);
	return (1);
}

int	dpf_putptr(int _fd, void *_ptr)
{
	int	out;

	if (write (_fd, "0x", 2) == -1)
		return (-1);
	out = dpf_putunbr_base(_fd, (size_t)_ptr, "0123456789abcdef");
	if (out == -1)
		return (-1);
	return (2 + out);
}

int	dpf_putstr(int _fd, char *_str)
{
	int	out;

	if (!_str)
	{
		if (write(_fd, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	out = -1;
	while (_str[++out])
		;
	if (write(_fd, _str, out) == -1)
		return (-1);
	return (out);
}
