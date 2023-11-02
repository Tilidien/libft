/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:14:05 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/31 21:48:19 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_isspace(int _c)
{
	return (
		(unsigned char)_c == '\t'
		|| (unsigned char)_c == ' '
		|| (unsigned char)_c == '\r'
		|| (unsigned char)_c == '\n'
		|| (unsigned char)_c == '\v'
		|| (unsigned char)_c == '\f'
	);
}
