/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 07:59:51 by marvin            #+#    #+#             */
/*   Updated: 2022/06/17 22:50:43 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;

	i = 0;
	if (!s1 && s2)
		return (ft_strdup(s2));
	else if (s1 && !s2)
		return (ft_strdup(s1));
	else if (s1 && s2)
	{
		tmp = (malloc(ft_strlen(s1)));
		if (!(tmp + ft_strlen(s2) + 1))
			return (0);
		while (*s1)
			tmp[i++] = *(s1++);
		while (*s2)
			tmp[i++] = *(s2++);
		tmp[i] = '\0';
	}
	else
		return (0);
	return (tmp);
}
