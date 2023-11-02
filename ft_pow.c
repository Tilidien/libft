/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:15:46 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/31 17:33:51 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_pow_rec(int _n, int _mul, size_t _pow)
{
	if (_pow <= 1)
		return (_n);
	else
		return (ft_pow_rec(_n * _mul, _mul, _pow - 1));
}

/// @brief _n to the power of _pow
/// @param _n base
/// @param _pow power
/// @return 
size_t	ft_pow(int _n, size_t _pow)
{
	return (ft_pow_rec(_n, _n, _pow));
}
