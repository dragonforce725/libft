/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:21:46 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/19 21:26:38 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	char	c;
	char	sc;
	size_t	len;

	if ((c = *str2++) != '\0')
	{
		len = strlen (str2);
		if ((sc = *str1++) == '\0' || n-- < 1)
			return (0);
		while (sc != c )
		{
			if (len > n)
				return (0);
		}
		while (strncmp (str1, str2, n) != 0)
			str1--;
	}
	return ((char *) s);
}
