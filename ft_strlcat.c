/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 09:28:48 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/25 02:41:23 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	lsize;
	size_t	dsize;

	i = 0;
	lsize = ft_strlen(src);
	dsize = ft_strlen(dest);
	if (n <= dsize)
		return (lsize + n);
	while ((dest[i] != '\0') && i < (n - 1))
		i++;
	while (*src && i < (n -1))
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dsize + lsize);
}
