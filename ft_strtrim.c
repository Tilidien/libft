/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:37:27 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/01 18:05:58 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *_str, const char *_set)
{
	int	left_bound;
	int	right_bound;

	if (!ft_strlen(_set))
		return (ft_strdup(_str));
	left_bound = 0;
	right_bound = (int)ft_strlen(_str) - 1;
	while (left_bound < right_bound && ft_strchr(_set, (int)_str[left_bound]))
		left_bound++;
	while (right_bound > left_bound && ft_strchr(_set, (int)_str[right_bound]))
		right_bound--;
	if (! ft_strchr(_set, (int)_str[right_bound]))
		right_bound++;
	return (ft_substr(_str, left_bound, right_bound - left_bound));
}
