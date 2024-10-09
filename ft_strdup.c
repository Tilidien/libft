/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:49:35 by tgmelin           #+#    #+#             */
/*   Updated: 2024/10/09 23:57:33 by tgmelin          ###   ########.fr       */
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
		return (ft_error(NULL, "MALLOC ERROR", EXIT_SUCCESS), NULL);
	}
	i = -1;
	while (_src[++i])
	{
		out[i] = _src[i];
	}
	out[i] = 0;
	return (out);
}
