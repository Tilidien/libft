/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremovewhere.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:39:40 by tgmelin           #+#    #+#             */
/*   Updated: 2024/11/23 16:07:39 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_lstremove_where - Removes elements from a linked list based on a condition.
 * @_lst: Pointer to the head of the list.
 * @_condition: Function pointer to check if an element should be removed.
 * @_del: Function pointer to delete the content of the element.
 */
void	ft_lstremove_where(t_list **_lst, bool (*_condition)(void *), void (*_del)(void *))
{
	t_list	virtual_first;
	t_list	*current;
	t_list	*last;

	if (!_lst || !*_lst || !_condition)
		return ;
	virtual_first.next = *_lst;
	last = &virtual_first;
	current = last->next;
	while (current)
	{
		if (_condition(current->content))
		{
			last->next = current->next;
			ft_lstdelone(current, _del);
			current = last->next;
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
	*_lst = virtual_first.next;
}
