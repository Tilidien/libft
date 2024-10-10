/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 01:18:45 by tgmelin           #+#    #+#             */
/*   Updated: 2024/10/11 01:28:14 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpop(t_list **_lst)
{
	t_list	*current;
	t_list	*last;

	current = *_lst;
	last = NULL;
	if (!current)
		return (NULL);
	while (current->next)
	{
		last = current;
		current = current->next;
	}
	if (last)
		last->next = NULL;
	else
		*_lst = NULL;
	return (current);
}
