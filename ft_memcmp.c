/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 11:53:47 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/14 14:36:07 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				a;

	a = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (a < n)
	{
		if (ss1[a] != ss2[a])
			return (ss1[a] - ss2[a]);
		a++;
	}
	return (0);
}
