/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:47 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/09 19:30:30 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *_lst, void *(*_f)(void *), void (*_del)(void *))
{
	t_list	*out;
	t_list	*new_elem;
	void	*new_content;

	out = 0;
	while (_lst)
	{
		new_content = _f(_lst->content);
		if (!new_content)
		{
			ft_lstclear(&out, _del);
			return (NULL);
		}
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			ft_lstclear(&out, _del);
			_del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&out, new_elem);
		_lst = _lst->next;
	}
	return (out);
}
