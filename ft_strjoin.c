/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:53:54 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 20:15:54 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *_s1, const char *_s2)
{
	size_t	len_a;
	size_t	len_b;
	char	*out;

	len_a = ft_strlen(_s1);
	len_b = ft_strlen(_s2);
	out = (char *)malloc(len_a + len_b + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, _s1, len_a + 1);
	ft_strlcpy(&out[len_a], _s2, len_b + 1);
	return (out);
}
