/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:08:39 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/06/30 23:07:31 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	c;

	c = 0;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	if ((size_t)str1 - (size_t)str2 < n)
		ft_memcpy(str1, str2, n);
	else
	{
		while (c < n)
		{
			((unsigned char *)str1)[c] = ((unsigned char *)str2)[c];
			c++;
		}
	}
	return (str1);
}
