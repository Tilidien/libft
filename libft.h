/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgmelin <tgmelin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:50:22 by tgmelin           #+#    #+#             */
/*   Updated: 2024/04/22 19:52:08 by tgmelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h> //va_start, va_end, va_arg, va_list

typedef char	t_bool;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_printf_vars
{
	va_list	args;
	int		i;
	int		sum;
	char	err;
}	t_printf_vars;

typedef struct s_putnbr_base_vars
{
	int		baselen;
	int		out;
	size_t	num;
}	t_putnbr_base_vars;

typedef struct s_split_vars
{
	size_t			wordcount;
	size_t			charcount;
	char			**out;
	unsigned char	delim;
	unsigned int	i;
	unsigned int	j;
	char			*outstr;
}	t_split_vars;

int		dpf_putnbr_base(int _fd, ssize_t _num, char *_base);
int		dpf_putchr(int _fd, char _c);
int		dpf_putptr(int _fd, void *_ptr);
int		dpf_putstr(int _fd, char *_str);
int		ft_dprintf(int _fd, const char *_format, ...);
int		pf_putnbr_base( ssize_t _num, char *_base);
int		pf_putchr(char _c);
int		pf_putptr(void *_ptr);
int		pf_putstr(char *_str);
int		ft_printf(const char *_format, ...);
int		ft_atoi(const char *_str );
void	ft_bzero(void *_ptr, size_t _size);
void	*ft_calloc(size_t _size, size_t _count);
int		ft_isalnum(int _arg);
int		ft_isalpha(int _arg);
int		ft_isascii(int _arg);
int		ft_isdigit(int _arg);
int		ft_isprint(int _arg);
char	*ft_itoa(int _n);
void	ft_lstadd_back(t_list **_lst, t_list *_new);
void	ft_lstadd_front(t_list **_lst, t_list *_new);
void	ft_lstclear(t_list **_lst, void (*_del)(void *));
void	ft_lstdelone(t_list *_lst, void (*_del)(void *));
void	ft_lstiter(t_list *_lst, void (*_f)(void *));
t_list	*ft_lstlast(t_list *_lst);
t_list	*ft_lstmap(t_list *_lst, void *(*_f)(void *), void (*_del)(void *));
t_list	*ft_lstnew(void *_content);
int		ft_lstsize(t_list *_lst);
void	*ft_memchr(const void *_mem, int _toSearch, size_t _size);
int		ft_memcmp(const void *_memA, const void *_memB, size_t _size);
void	*ft_memcpy(void *_dst, const void *_src, size_t _count);
void	*ft_memmove(void *_dst, const void *_src, size_t _size);
void	*ft_memset(void *_dst, int _ch, size_t _size);
size_t	ft_pow(int _n, size_t _pow);
void	ft_putchar_fd(char _c, int _fd);
void	ft_putendl_fd(char *_s, int _fd);
void	ft_putnbr_fd(int _n, int _fd);
void	ft_putstr_fd(char *_s, int _fd);
char	**ft_split(char const *_s, char c);
char	*ft_strchr(const char *_str, int _chr);
char	*ft_strdup(const char *_src );
void	ft_striteri(char *_s, void (*_f)(unsigned int, char *));
char	*ft_strjoin(const char *_s1, const char *_s2);
size_t	ft_strlcat(char *_dst, const char *_src, size_t _size);
size_t	ft_strlcpy(char *_dst, const char *_src, size_t _size);
size_t	ft_strlen(const char *_str);
char	*ft_strmapi(const char *_s, char (*_f)(unsigned int, char));
int		ft_strncmp(const char *_strA, const char *_strB, size_t _size);
char	*ft_strnstr(const char *_haystack, const char *_needle, size_t _size);
char	*ft_strrchr(const char *_str, int _ch);
char	*ft_strtrim(const char *_s1, const char *_set);
char	*ft_substr(const char *_s, unsigned int _start, size_t _len);
int		ft_tolower(int _c);
int		ft_toupper(int _c);
t_bool	ft_iswhitespace(char c);
void	ft_freeptrarr(char **_arr);

#endif