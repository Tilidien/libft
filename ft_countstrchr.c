/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countstrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:33:50 by tgmelin           #+#    #+#             */
/*   Updated: 2024/11/24 20:36:17 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countstrchr(const char *_str, int _chr)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	while (_str[i])
		if ((unsigned char)_str[i++] == (unsigned char)_chr)
			out++;
	return (out);
}
