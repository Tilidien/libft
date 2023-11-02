/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:13:27 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 20:16:44 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *_str, int _ch)
{
	int	i;

	i = ft_strlen(_str);
	if (!(unsigned char)_ch)
		return ((char *)&_str[i]);
	while (--i >= 0)
	{
		if (_str[i] == (char)_ch)
		{
			return ((char *)&_str[i]);
		}
	}
	return (NULL);
}
