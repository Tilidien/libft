/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:43:59 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/09 19:37:14 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t _size, size_t _count)
{
	void	*out_ptr;

	out_ptr = malloc(_size * _count);
	if (!out_ptr)
		return (NULL);
	ft_bzero(out_ptr, _size * _count);
	return (out_ptr);
}
