/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:52 by tgmelin           #+#    #+#             */
/*   Updated: 2024/10/11 01:18:51 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *_content)
{
	t_list	*out;

	out = (t_list *)malloc(sizeof(t_list));
	if (! out)
	{
		return (NULL);
	}
	out->content = _content;
	out->next = NULL;
	return (out);
}

t_list	*ft_slstnew(void *_content)
{
	t_list	*out;

	out = (t_list *)malloc(sizeof(t_list));
	if (! out)
		return (free(_content), NULL);
	out->content = _content;
	out->next = NULL;
	return (out);
}
