# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rferrero <rferrero@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 23:22:05 by rferrero          #+#    #+#              #
#    Updated: 2022/12/01 11:59:08 by rferrero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	push_swap

CC					=	gcc
CCFLAGS				=	-Wall -Wextra -Werror

PATH_PRINTF			=	./ft_printf
PRINTF				=	$(PATH_PRINTF)/libftprintf.a

RM					=	rm -rf

SRC					=	push_swap.c \
						$(addprefix utils/,	check.c \
											error.c \
											orientations_push.c \
											orientations_reverse.c \
											orientations_rotate.c \
											orientations_swap.c \
											radix_sort.c \
											small_sort.c \
											sort.c \
											start.c \
											template.c)

OBJ					=	$(SRC:%.c=%.o)

all:				$(NAME)

$(NAME):			$(OBJ)
					$(MAKE) -C $(PATH_PRINTF)
					$(CC) $(CCFLAGS) $(OBJ) $(PRINTF) -o $(NAME)

clean:
					$(MAKE) -C $(PATH_PRINTF) clean
					$(RM) $(OBJ)

fclean:				clean
					$(MAKE) -C $(PATH_PRINTF) fclean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re