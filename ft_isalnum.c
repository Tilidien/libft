/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:03 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/01 17:12:28 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int _arg)
{
	return (((unsigned char)_arg >= 'a' && (unsigned char)_arg <= 'z')
		|| ((unsigned char)_arg >= 'A' && (unsigned char)_arg <= 'Z')
		|| ((unsigned char)_arg >= '0' && (unsigned char)_arg <= '9'));
}
