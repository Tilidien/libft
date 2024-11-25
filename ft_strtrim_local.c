/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_local.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:54:39 by tgmelin           #+#    #+#             */
/*   Updated: 2024/11/25 18:34:59 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strtrim_local(char *_str, const char *_set)
{
	int	left_bound;
	int	right_bound;

	if (!ft_strlen(_set))
		return ;
	left_bound = 0;
	right_bound = (int)ft_strlen(_str) - 1;
	while (left_bound < right_bound && ft_strchr(_set, (int)_str[left_bound]))
		left_bound++;
	while (right_bound > left_bound && ft_strchr(_set, (int)_str[right_bound]))
		right_bound--;
	if (! ft_strchr(_set, (int)_str[right_bound]))
		right_bound++;
	ft_strlcpy(_str, &_str[left_bound], right_bound - left_bound + 1);
}
