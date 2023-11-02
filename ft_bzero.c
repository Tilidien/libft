/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:43:55 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/30 18:53:57 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *_ptr, size_t _size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char *)_ptr;
	while (i < _size)
	{
		mem[i] = 0;
		i++;
	}
}
