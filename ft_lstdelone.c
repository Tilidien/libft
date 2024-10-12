/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:33 by tgmelin           #+#    #+#             */
/*   Updated: 2024/10/12 21:56:21 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *_lst, void (*_del)(void *))
{
	if (_lst)
	{
		if (_del)
			_del(_lst->content);
		free(_lst);
	}
}
