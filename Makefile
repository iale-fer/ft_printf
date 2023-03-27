# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 18:22:05 by ivanalefern       #+#    #+#              #
#    Updated: 2023/03/24 00:03:21 by ivanalefern      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS 			= 	ft_hexa.c ft_printf_more.c ft_printf.c ft_dec.c ft_printf_utilities.c \

OBJS			= $(SRCS:.c=.o)

CCFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re