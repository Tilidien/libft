/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 01:28:41 by tgmelin           #+#    #+#             */
/*   Updated: 2024/10/11 01:30:24 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstcount(t_list **_lst)
{
	t_list	*current;
	int		out;

	out = 0;
	current = *_lst;
	while (current)
	{
		current = current->next;
		out++;
	}
	return (out);
}
