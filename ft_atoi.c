/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:16:32 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/17 19:48:09 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	n;
	int		isneg;
	int		a;

	i = 0;
	n = 0;
	isneg = 0;
	a = (str[i] == '\n' || str[i] == '\r');
	while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\b' || a
			|| str[i] == '\f' || str[i] == '\v'
			|| str[i] == 32))
			i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
			n = (n * 10) + (str[i++] - '0');
	if (isneg == 1)
		return (-n);
	return (n);
}
