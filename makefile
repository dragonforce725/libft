# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 19:07:40 by mhenriqu          #+#    #+#              #
#    Updated: 2022/06/18 11:52:03 by mhenriqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=  ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memset.c\
		ft_strlcpy.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_atoi.c\
		ft_strnstr.c\
		ft_memmove.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_putstr_fd.c\
		ft_putnbr_fd.c\
		ft_putchar_fd.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putendl_fd.c\
		ft_split.c

FLAGS   = -Wall -Wextra -Werror 

CC	= cc

NAME	= libft.a

OBJ = $(SRCS:.c=.o)

$(NAME):	$(OBJ)
	@ar r $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(name)

re: fclean all

.PHONY:	all clean fclean re
