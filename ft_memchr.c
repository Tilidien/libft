/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:45:02 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 20:14:31 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *_mem, int _chr, size_t _size)
{
	if (_size == 0)
	{
		return (NULL);
	}
	if (*((unsigned char *)_mem) == (unsigned char)_chr)
	{
		return ((void *)_mem);
	}
	return (ft_memchr(_mem + 1, _chr, _size - 1));
}
