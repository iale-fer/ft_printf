# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 18:22:05 by ivanalefern       #+#    #+#              #
#    Updated: 2023/03/28 13:56:18 by ivanalefern      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS 			= 	ft_hexa.c ft_printf.c ft_all.c \

OBJS			= $(SRCS:.c=.o)

CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)

.c.o:
	$(CC) -c $(CFLAGS) $< -o $(<:.c=.o)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re