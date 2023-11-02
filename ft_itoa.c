/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:05:54 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 20:13:51 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned short	ft_get_num_len(unsigned long long _n)
{
	unsigned short	out;

	out = 0;
	while (1)
	{
		_n /= 10;
		out++;
		if (!_n)
			break ;
	}
	return (out);
}

char	*ft_itoa(int _n)
{
	char		*out;
	int			out_len;
	long long	n;

	n = (long long)_n;
	if (_n < 0)
		n *= -1;
	out_len = ft_get_num_len((unsigned long long)n) + (_n < 0) + 1;
	out = (char *)malloc(out_len--);
	if (!out)
		return (NULL);
	out[out_len--] = 0;
	while (out_len >= (_n < 0))
	{
		out[out_len--] = (n % 10) + '0';
		n /= 10;
	}
	if (_n < 0)
		out[0] = '-';
	return (out);
}
