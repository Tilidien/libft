/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:01:55 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 23:45:09 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief writes a given signed integral to a given file descriptor
/// @param _n number to be writen
/// @param _fd file descriptor to write to
void	ft_putnbr_fd(int _n, int _fd)
{
	long long	n;
	int			divisor;

	if (_n == 0)
	{
		ft_putchar_fd('0', _fd);
		return ;
	}
	divisor = 1;
	n = _n;
	if (n < 0)
	{
		ft_putchar_fd('-', _fd);
		n *= -1;
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		ft_putchar_fd(n / divisor + '0', _fd);
		n %= divisor;
		divisor /= 10;
	}
}
