/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:08:24 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/24 21:37:55 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	a;

	i = 0;
	s = (unsigned char *)str;
	a = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == a)
			return (s + i);
		i++;
	}
	return (NULL);
}
