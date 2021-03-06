/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:25:49 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/06/30 21:29:39 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char*src, size_t size);
int		ft_isdigit(int a);
int		ft_isalpha(int c);
int		ft_isalnum(int a);
char	*ft_strchr(const char *str, int a);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_isascii(int a);
int		ft_isprint(int a);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_toupper(int a);
int		ft_tolower(int a);
char	*ft_strrchr(const char *str, int a);
void	*ft_memset(void *str, int a, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_atoi(const char *str);
char	*ft_strnstr(const char *str1, const char *str2, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strdup(const char *s1);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putendl_fd(char *s, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
#endif
