/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:43:51 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/07 00:27:11 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_isspace(int _c)
{
	return (
		(unsigned char)_c == '\t'
		|| (unsigned char)_c == ' '
		|| (unsigned char)_c == '\r'
		|| (unsigned char)_c == '\n'
		|| (unsigned char)_c == '\v'
		|| (unsigned char)_c == '\f'
	);
}

typedef struct s_atoi_vars
{
	int		out;
	char	sign;
	size_t	mul;
	int		i;
}	t_atoi_vars;

static int	ft_atoi_shortend(t_atoi_vars *_vars, const char *_str)
{
	while (ft_isspace(_str[_vars->i]))
		_vars->i++;
	if (_str[_vars->i] == '-' || _str[_vars->i] == '+')
	{
		_vars->sign = _str[_vars->i];
		_vars->i++;
	}
	while (ft_isdigit(_str[_vars->i]))
		_vars->i++;
	if (_vars->i > 0)
		_vars->i--;
	while (_vars->i >= 0 && ft_isdigit((int)_str[_vars->i]))
	{
		_vars->out += _vars->mul
			* ((unsigned char)_str[_vars->i] - '0');
		_vars->mul *= 10;
		_vars->i--;
	}
	if (_vars->sign == '-')
		_vars->out *= -1;
	return (_vars->out);
}

int	ft_atoi(const char *_str)
{
	t_atoi_vars	vars;

	vars.i = 0;
	vars.mul = 1;
	vars.out = 0;
	vars.sign = '+';
	return (ft_atoi_shortend(&vars, _str));
}
