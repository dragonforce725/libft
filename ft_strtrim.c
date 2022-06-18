/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:37:02 by marvin            #+#    #+#             */
/*   Updated: 2022/06/17 20:27:02 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	f;
	size_t	end;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		f = 0;
		end = ft_strlen(s1);
		while (s1[f] && ft_strchr(set, s1[f]))
		f++;
		while (s1[end - 1] && ft_strchr(set, s1[end -1]) && end > f)
		end--;
		str = (char *) malloc(sizeof(char) * (end - f + 1));
		if (str)
			ft_strlcpy (str, &s1[f], end - f + 1);
	}
	return (str);
}
