/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:21:46 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/25 02:14:22 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	len;

	if (*str2 == '\0')
		return ((char *)str1);
	len = ft_strlen(str2);
	while (*str1 != '\0' && n-- >= len)
	{
		if (*str1 == *str2 && ft_strncmp(str1, str2, len) == 0)
			return ((char *)str1);
		str1++;
	}
	return (NULL);
}
