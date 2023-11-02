/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:53:10 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/31 17:34:49 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief writes a single char to the given file descriptor
/// @param _c char to print
/// @param _fd file descriptor to write to
void	ft_putchar_fd(char _c, int _fd)
{
	write(_fd, &_c, 1);
}
