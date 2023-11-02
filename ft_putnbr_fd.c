/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:01:55 by tgmelin           #+#    #+#             */
/*   Updated: 2023/10/31 17:36:54 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief writes a given signed integral to a given file descriptor
/// @param _n number to be writen
/// @param _fd file descriptor to write to
void	ft_putnbr_fd(int _n, int _fd)
{
	char	*strnbr;

	strnbr = ft_itoa(_n);
	if (!strnbr)
		return ;
	ft_putstr_fd(strnbr, _fd);
	free(strnbr);
}
