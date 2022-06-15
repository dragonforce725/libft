# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhenriqu <marcos.henrique.com.br725@gmail  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 11:19:36 by mhenriqu          #+#    #+#              #
#    Updated: 2022/06/15 11:20:49 by mhenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=  ft_isalnum.c
		ft_isalpha.c
		ft_isascii.c
		ft_isdigit.c
		ft_isprint.c
		ft_strchr.c
		ft_strlcat.c
		ft_strlen.c
		ft_strrchr.c
		ft_tolower.c
		ft_toupper.c
		ft_strncmp.c
		ft_memchr.c
		ft_memcmp.c
		ft_memset.c
		ft_strlcpy.c
		ft_bzero.c

FLAGS   = -Wall -Wextra -Werror 

CC	= cc -c -o

NAME	= libft.a

OBJ = $(SRCS:.c=.o)

$(NAME):	$(OBJ)
	@ar r $(NAME) $(OBJ)
	@echo "feito !"

all:	$(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -f $(name)

re: fclean all

.PHONY
		re fclean clean all
