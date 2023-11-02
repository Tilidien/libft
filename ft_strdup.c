/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:49:35 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/01 18:08:40 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *_src)
{
	size_t	len;
	char	*out;
	int		i;

	len = ft_strlen(_src);
	out = (char *)malloc(len + 1);
	if (!out)
	{
		return (NULL);
	}
	i = -1;
	while (_src[++i])
	{
		out[i] = _src[i];
	}
	out[i] = 0;
	return (out);
}
