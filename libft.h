/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:50:49 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/17 19:47:14 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
#define _LIBFT_H

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFF_SIZE 100

int	ft_strlen(char *str);
size_t	ft_strlcat(char *dest, const char*src, size_t size);
int	ft_isdigit(int a);
int	ft_isalpha(int a);
int	ft_isalnum(int a);
char	*ft_strchr(const char *str, int a);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
int	ft_isascii(int a);
int ft_isprint(int a);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int a);
int ft_tolower(int a);
char    *ft_strchr(const char *str, int a);
char    *ft_strrchr(const char *str, int a);

void	*ft_memset(void *str, int a, size_t n);
void	ft_bzero(void *s, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int	ft_atoi(const char *str);

#endif
