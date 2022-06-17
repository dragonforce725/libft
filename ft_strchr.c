/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:50:03 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/06/16 18:25:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char 	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (NULL);	
		str++;	
	}
	return ((char *)str);
}
