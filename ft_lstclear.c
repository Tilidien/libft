/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:30 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/01 19:32:14 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **_lst, void (*_del)(void *))
{
	t_list	*next;

	while (*_lst)
	{
		next = _lst[0]->next;
		ft_lstdelone(*_lst, _del);
		*_lst = next;
	}
	*_lst = 0;
}
