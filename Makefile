# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/19 18:19:46 by meandrad          #+#    #+#              #
#    Updated: 2024/10/26 15:16:36 by meandrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c \
      ft_bzero.c \
      ft_calloc.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memset.c \
      ft_memmove.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_strchr.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strnstr.c \
      ft_strrchr.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strncmp.c \
      ft_putchar_fd.c \
      ft_putnbr_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_itoa.c \
	  ft_strtrim.c \
	  ft_strmapi.c \
	  ft_striteri.c

OBJS = $(SRC:.c=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean refclean: clean
	 rm -f $(NAME)

re: clean fclean

.PHONY: all clean fclean re
