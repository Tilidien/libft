/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:44:52 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 20:14:20 by tgmelin          ###   ########.fr       */
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
