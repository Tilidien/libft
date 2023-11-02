/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:27:37 by tgmelin           #+#    #+#             */
/*   Updated: 2023/11/02 05:18:53 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_v
{
	size_t			wordcount;
	size_t			charcount;
	char			**out;
	unsigned char	delim;
	unsigned int	i;
	unsigned int	j;
	char			*outstr;
}	t_v;

static size_t	sslen(t_v *vars, const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && (unsigned char)str[i] != vars->delim)
		i++;
	return (i);
}

static char	ft_split_count_and_init(t_v *vars, const char *str)
{
	while (str[vars->i])
	{
		if ((unsigned char)str[vars->i] != vars->delim)
		{
			vars->wordcount++;
			while (str[vars->i] && (unsigned char)str[vars->i] != vars->delim)
				vars->i++;
			continue ;
		}
		vars->i++;
	}
	vars->out = (char **)ft_calloc(sizeof(char *), vars->wordcount + 1);
	vars->i = 0;
	return (!!vars->out);
}

static char	**ft_split_err(t_v *vars)
{
	vars->i = 0;
	while (vars->out[vars->i])
		free(vars->out[vars->i++]);
	free(vars->out);
	return (NULL);
}

char	**ft_split(const char *_s, char _c)
{
	t_v	vars;

	ft_bzero(&vars, sizeof(t_v));
	vars.delim = (unsigned char)_c;
	if (!ft_split_count_and_init(&vars, _s))
		return (NULL);
	while (vars.i < vars.wordcount)
	{
		while (_s[vars.j] && (unsigned char)_s[vars.j] == vars.delim)
			vars.j++;
		vars.charcount = sslen(&vars, &_s[vars.j]);
		vars.out[vars.i] = ft_substr(_s, vars.j, vars.charcount);
		if (!vars.out[vars.i])
			return (ft_split_err(&vars));
		vars.j += vars.charcount;
		vars.i++;
	}
	return (vars.out);
}
