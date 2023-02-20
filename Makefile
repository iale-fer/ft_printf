# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivanalefernandez <ivanalefernandez@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 18:22:05 by ivanalefern       #+#    #+#              #
#    Updated: 2023/02/15 17:20:11 by ivanalefern      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#SRCS 			= 	ft_hexa.c 
#					ft_printf_utilities.c 
#					ft_putnbr.c 

#OBJS			= $(SRCS:.c=.o)

#RM				= rm -f
#CCFLAGS			= -Wall -Wextra -Werror

#NAME			= libftprintf.a

#all:			$(NAME)

#$(NAME):		$(OBJS)
#				ar -rcs $(NAME) $(OBJS)

#clean:
#				$(RM) $(OBJS)

#fclean:			clean
#				$(RM) $(NAME)

#re:				fclean all

#.PHONY:			all clean fclean re
NAME = libftprintf.a
SRC = ft_printf.c ft_printf_utilities.c ft_hexa.c ft_dec.c
AR = ar -rcs
CCFLAGS = -Wall -Werror -Wextra
OBJS = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Compila2"

%.o: %.c
	@gcc $(CCFLAGS) -c -o $@ $<

clean:
	@rm $(OBJS)
	@echo "Borrado to2"


fclean: clean
	@rm -f $(NAME)

	
re: fclean all

.PHONY: all fclean clean re