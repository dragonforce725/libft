/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:50:03 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/06/16 07:54:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	/* char 	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL);	
		str++;	
	}
	return (str);
} */
	
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == find)
			return ((char*)s + i);
		i++;
	}
	if (s[i] == find - 1)
		return ((char*)s + i);
	return (0);
}
