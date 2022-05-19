/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:03:15 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/14 14:32:52 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp( const char *str1, const char *str2, size_t n)
{
	size_t	a;
	int		b;
	int		c;

	a = 0;
	b = (str2[a] != '\0');
	c = (str1[a] == str2[a]);
	if (n == 0)
		return (0);
	while (a < n - 1 && str1[a] != '\0' && b && c)
		a++;
	return ((unsigned char)str1[a] - (unsigned char) str2[a]);
}
