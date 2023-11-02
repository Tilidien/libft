/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:24 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/30 16:56:18 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **_lst, t_list *_new)
{
	t_list	*last;

	last = ft_lstlast(*_lst);
	if (last)
	{
		last->next = _new;
	}
	else
	{
		*_lst = _new;
	}
}
