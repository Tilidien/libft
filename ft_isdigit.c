/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:15 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/01 19:03:04 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int _arg)
{
	return ((unsigned char)_arg >= (unsigned char) '0'
		&& (unsigned char)_arg <= (unsigned char) '9');
}
