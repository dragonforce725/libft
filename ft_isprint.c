/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:52 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/05/12 16:55:12 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (a == ' ' || a == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
