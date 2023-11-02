/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:56:18 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/31 17:37:52 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief writes a given c-string to a given file descriptor
/// @param _s null terminated char array
/// @param _fd file descriptor to write to
void	ft_putstr_fd(char *_s, int _fd)
{
	size_t	len;

	len = ft_strlen(_s);
	if (len > 0)
		write(_fd, _s, len);
}
