/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:09:08 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 20:16:26 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *_stra, const char *_strb, size_t _size)
{
	size_t	i;

	i = 0;
	while (i < _size && _stra[i] && _stra[i] == _strb[i])
		i++;
	if (i == _size)
		return (0);
	return ((unsigned char)_stra[i] - (unsigned char)_strb[i]);
}
