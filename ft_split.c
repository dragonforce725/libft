/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:12:37 by mhenriqu          #+#    #+#             */
/*   Updated: 2022/06/18 11:45:10 by mhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_word(const char *str, char c)
{
	int	i;
	int	next;

	i = 0;
	next = 0;
	while (*str)
	{
		if (*str != c && next == 0)
		{
			next = 1;
			i++;
		}
		else if (*str == c)
			next = 0;
		str++;
	}
	return (i);
}

static char	*w_len(const char *str, int init, int and)
{
	char	*big;
	int		i;

	i = 0;
	big = malloc ((and - init + 1) * sizeof(char));
	while (init < and)
		big[i++] = str[init++];
	big[i] = '\0';
	return (big);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	int		start;

	tab = (malloc((num_word(s, c) + 1) * sizeof(char *)));
	if (!s || !tab)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (start != i)
		tab[j++] = w_len(s, start, i);
	i++;
	}
	tab[j] = NULL;
	return (tab);
}
