# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mirivera <mirivera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/20 09:12:29 by mirivera          #+#    #+#              #
#    Updated: 2019/08/03 17:22:22 by mirivera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = header/

FLAGS = -Wall -Wextra -Werror

SRCS = ft_isascii.c ft_lstdelone.c ft_memchr.c ft_putchar.c ft_putstr.c	ft_strcpy.c ft_strjoin.c ft_strncmp.c ft_strsplit.c \
ft_isdigit.c ft_lstiter.c ft_memcmp.c ft_putchar_fd.c ft_putstr_fd.c ft_strdel.c ft_strlcat.c ft_strncpy.c ft_strstr.c  ft_atoi.c \
ft_isprint.c ft_lstmap.c ft_memcpy.c ft_putendl.c ft_strcat.c ft_strdup.c ft_strlen.c ft_strnequ.c ft_strsub.c ft_bzero.c ft_itoa.c \
ft_lstnew.c ft_memdel.c ft_putendl_fd.c ft_strchr.c ft_strequ.c ft_strmap.c ft_strnew.c ft_strtrim.c  ft_isalnum.c ft_lstadd.c \
ft_memalloc.c ft_memmove.c ft_putnbr.c ft_strclr.c ft_striter.c ft_strmapi.c ft_strnstr.c ft_tolower.c ft_isalpha.c ft_lstdel.c \
ft_memccpy.c ft_memset.c ft_putnbr_fd.c ft_strcmp.c ft_striteri.c ft_strncat.c ft_strrchr.c ft_toupper.c ft_isspace.c ft_rotone.c \
ft_rot13.c ft_swap.c ft_first_word.c ft_search_and_replace.c

OBJS = $(patsubst %.c,%.o,$(SRCS))

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(addprefix srcs/,$(SRCS)) -I $(HEADER)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: make all clean fclean re
