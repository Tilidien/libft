/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:01:55 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/30 19:11:18 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *_dst, const char *_src, size_t _size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(_src);
	dst_len = ft_strlen(_dst);
	i = 0;
	if (!_size)
	{
		return (src_len);
	}
	while (dst_len + i < _size - 1 && _src[i])
	{
		_dst[dst_len + i] = _src[i];
		i++;
	}
	_dst[dst_len + i] = 0;
	if (dst_len >= _size)
	{
		return (src_len + _size);
	}
	return (dst_len + src_len);
}
