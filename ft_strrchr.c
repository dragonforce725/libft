/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:26:16 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/31 05:57:35 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int b)
{
	int	a;

	a = ft_strlen(str);
	while (a >= 0)
	{
		if (str[a] == b)
			return ((char *) &str[a]);
		a--;
	}
	return (0);
}
