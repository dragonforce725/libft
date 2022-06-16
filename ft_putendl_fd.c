/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:29:27 by marvin            #+#    #+#             */
/*   Updated: 2022/05/28 19:29:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    if (s != '\0')
    {
        ft_putstr_fd (s, fd);
        ft_putchar_fd ('\n', fd);
    }
}

int main()
{
    char *str = 0;
    ft_putendl_fd(str, 4);
    return 0;
}
