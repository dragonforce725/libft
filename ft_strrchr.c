/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:26:16 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/25 06:11:06 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int b)
{
	int	a;
	int	temp;

	a = 0;
	temp = -1;
	while (str[a] != '\0')
	{
		if (str[a] == b)
			temp = 1;
		++a;
	}
	if (b == '\0')
		return ((char *)str + a);
	if (temp != -1)
		return ((char *)str + temp);
	return (NULL);
}
