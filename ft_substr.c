/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:44:34 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 20:17:12 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_substr_empty_str(void)
{
	char	*out;

	out = (char *)ft_calloc(1, 1);
	return (out);
}

char	*ft_substr(char const *_str, unsigned int _start, size_t _len)
{
	char	*substr;
	size_t	inlen;
	size_t	outlen;

	inlen = ft_strlen(_str);
	if (inlen <= _start || ! _len || ! inlen)
		return (ft_substr_empty_str());
	outlen = inlen - _start;
	if (_len < outlen)
		outlen = _len;
	substr = (char *)malloc(outlen + 1);
	if (!substr)
		return (NULL);
	substr[outlen] = 0;
	_len = 0;
	while (_len < outlen)
	{
		substr[_len] = _str[_start + _len];
		_len++;
	}
	return (substr);
}
