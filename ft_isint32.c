/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint32.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:09:44 by tgmelin           #+#    #+#             */
/*   Updated: 2024/11/24 20:11:02 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isint32(char *_str)
{
	long long	num;
	int			i;
	int			is_negative;

	is_negative = 0;
	i = 0;
	if (_str[0] == '-')
	{
		is_negative = 1;
		i = 1;
	}
	num = 0;
	while (_str[i])
	{
		if (_str[i] > '9' || _str[i] < '0')
			return (false);
		num = num * 10 + (_str[i++] - '0');
		if ((is_negative && - num < INT32_MIN)
			|| (!is_negative && num > INT32_MAX))
			return (false);
	}
	return (true);
}
