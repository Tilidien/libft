/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:50:22 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/30 18:14:13 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *_s, void (*_f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (_s[i])
	{
		_f(i, &_s[i]);
		i++;
	}
}
