/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:08:24 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/13 17:37:20 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (str[i] == n)
	{
		if (str[i] == c)
			return ((char *)str + 1);
		i++;
	}
	if (str[i] == c)
		return ((char *)str +1);
	return (0);
}
