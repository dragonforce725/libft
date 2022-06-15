/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:28:48 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/12 17:37:49 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lsize;
	size_t	dsize;

	lsize = 0;
	dsize = strlen(dest);
	while (*dest && size > 0)
	{
		dest++;
		lsize++;
		size--;
	}
	while (*src && size-- > 1)
	{
		*dest++ = *src++;
	}
	if (size == 1 || *src == 0)
		*dest = '\0';
	return (dsize + lsize);
}
