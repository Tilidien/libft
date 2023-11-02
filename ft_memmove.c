/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:43:25 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/01 17:20:50 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *_dst, const void *_src, size_t _size)
{
	unsigned char	*dst;
	unsigned char	*src;

	src = (unsigned char *)_src;
	dst = (unsigned char *)_dst;
	if (src > dst)
	{
		while (_size--)
		{
			*dst++ = *src++;
		}
	}
	else
	{
		src += _size - 1;
		dst += _size - 1;
		while (_size--)
		{
			*dst-- = *src--;
		}
	}
	return (_dst);
}
