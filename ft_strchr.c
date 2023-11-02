/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:47:33 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 20:15:42 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *_str, int _chr)
{
	size_t	i;

	i = 0;
	while (_str[i])
	{
		if ((unsigned char)_str[i] == (unsigned char)_chr)
			return ((char *)&_str[i]);
		i++;
	}
	if (! (unsigned char)_chr)
		return ((char *)&_str[i]);
	return (NULL);
}
