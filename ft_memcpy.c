/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:25:53 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/17 16:30:16 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destc;
	const char	*srcc;

	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	destc = (char *)dest;
	srcc = (const char *) src;
	while (n--)
		destc[n] = srcc[n];
	return (dest);
}
