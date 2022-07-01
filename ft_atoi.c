/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:16:32 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/06/30 20:34:07 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long			i;
	long			n;
	unsigned int	is;

	i = 0;
	n = 1;
	is = 0;
	while (str[is] == ' ' || (str[is] == '\t' || str[is] == '\n'
			|| str[is] == '\r' || str[is] == '\f' || str[is] == '\v'))
			is++;
	if (str[is] == '-' || str[is] == '+')
	{
		if (str[is] == '-')
			n = -1;
		is++;
	}
	while (str[is] >= '0' && str[is] <= '9')
	{
		i = i * 10 + str[is] - '0';
		is++;
	}
	return ((int) i * n);
}
