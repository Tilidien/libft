/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:07 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/30 17:50:21 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int _arg)
{
	return (((unsigned char)_arg >= 'a' && (unsigned char)_arg <= 'z')
		|| ((unsigned char)_arg >= 'A' && (unsigned char)_arg <= 'Z'));
}
