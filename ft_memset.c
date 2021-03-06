/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:17:02 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/25 02:00:54 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int a, size_t n)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)str;
	while (i < n)
		b[i++] = (unsigned char) a;
	return (str);
}
