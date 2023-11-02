/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:59:05 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/31 17:35:52 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief writes a string to a given file descriptor fallowed by a newline
/// @param _s null terminated string to write
/// @param _fd file descriptor to write to
void	ft_putendl_fd(char *_s, int _fd)
{
	ft_putstr_fd(_s, _fd);
	ft_putchar_fd('\n', _fd);
}
