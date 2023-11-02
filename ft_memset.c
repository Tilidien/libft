/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:44:19 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/30 18:51:01 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *_dst, int _ch, size_t _size)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	ch;

	dst = (unsigned char *)_dst;
	ch = (unsigned char)_ch;
	i = 0;
	while (i < _size)
	{
		dst[i] = ch;
		i++;
	}
	return (dst);
}
