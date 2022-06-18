/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:26:16 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/06/18 04:23:51 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*temp;
	char	src;

	src = c;
	i = ft_strlen(str);
	temp = (char *)str;
	while (i != 0)
	{
		if (temp[i] == src)
			return (temp + i);
		i--;
	}
	if (str[0] == src)
		return (temp);
	return (NULL);
}
