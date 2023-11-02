/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:06:27 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/30 17:56:31 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *_dst, const char *_src, size_t _size)
{
	size_t	i;

	i = 0;
	if (_size)
	{
		while (_src[i] && i < _size - 1)
		{
			_dst[i] = _src[i];
			i++;
		}
		_dst[i] = 0;
	}
	return (ft_strlen(_src));
}
