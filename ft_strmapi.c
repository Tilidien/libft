/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:12:13 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 20:16:16 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *_s, char (*_f)(unsigned int, char))
{
	size_t	i;	
	char	*out;

	out = (char *)malloc(ft_strlen(_s) + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (_s[i])
	{
		out[i] = _f(i, _s[i]);
		i++;
	}
	out[i] = 0;
	return (out);
}
