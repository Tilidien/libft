/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:45:06 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 21:05:14 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/// @brief 
/// @param _mema this is nice
/// @param _memb 
/// @param size 
/// @return 
int	ft_memcmp(const void *_mema, const void *_memb, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)_mema)[i] != ((unsigned char *)_memb)[i])
		{
			return (((unsigned char *)_mema)[i]
				- ((unsigned char *)_memb)[i]);
		}
		i++;
	}
	return (0);
}
