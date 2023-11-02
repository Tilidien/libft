/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:12:18 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 20:16:35 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *_haystack, const char *_needle, size_t _size)
{
	size_t	i;
	size_t	needle_len;

	if (!_haystack || !_needle)
		i = ((size_t *)0)[0];
	if (!_needle[0])
		return ((char *)_haystack);
	needle_len = ft_strlen(_needle);
	if (needle_len > _size)
		return (NULL);
	i = 0;
	while (i <= _size - needle_len && _haystack[i])
	{
		if (!ft_strncmp(&_haystack[i], _needle, needle_len))
		{
			return ((char *)&_haystack[i]);
		}
		i++;
	}
	return (NULL);
}
