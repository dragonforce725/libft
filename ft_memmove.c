/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 03:08:39 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/25 03:21:14 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	if (str1 < str2)
		ft_memcpy(str1, str2, n);
	else
		while (n--)
			*(unsigned char *)(str1 + n) = *(unsigned char *)(str2 + n);
	return (str1);
}
