# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achepurn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 19:30:08 by achepurn          #+#    #+#              #
#    Updated: 2017/10/25 19:39:02 by achepurn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = display_file.c

OBJS = display_file.o

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	$(CC) -c $(CFLAGS) $(SRCS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
