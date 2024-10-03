/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin < tgmelin@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:23:57 by tgmelin           #+#    #+#             */
/*   Updated: 2024/10/02 12:23:57 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(t_ft_err_data *_data, const char *_msg, int _rtrn)
{
	static void	*allocated_data;
	static void	(*err_function)(void *_allocated_data);

	if (_data)
	{
		allocated_data = _data->alloc_data;
		err_function = _data->teardown_func;
		return ;
	}
	if (!allocated_data)
		return ;
	write(2, _msg, ft_strlen(_msg));
	err_function(allocated_data);
	exit(1);
}
