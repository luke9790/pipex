# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 14:32:07 by lmasetti          #+#    #+#              #
#    Updated: 2023/01/19 14:32:10 by lmasetti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#SETUP
NAME		=	pipex
CC		=	gcc
FLAGS		=	-Wall -Wextra -Werror
RM		=	rm -rf

#FILES AND PATH
HEADER_SRCS	=	pipex.h
HEADER_DIR	=	inc/
HEADER		=	$(addprefix $(HEADER_DIR), $(HEADER_SRCS))

MPATH_SRCS	=	main.c path.c utils.c
MPATH_DIR	=	src/
MPATH		=	$(addprefix $(MPATH_DIR), $(MPATH_SRCS))
OBJ_M		=	$(MPATH:.c=.o)

FUNC_SRCS	=	ft_strnstr.c ft_split.c ft_strjoin.c ft_strlen.c
FUNC_DIR	=	functions/
FUNC 		=	$(addprefix $(FUNC_DIR), $(FUNC_SRCS))
OBJ_F		=	$(FUNC:.c=.o)

#COMMANDS
%.o: %.c $(HEADER) Makefile
				@${CC} ${FLAGS} -c $< -o $@

$(NAME):		$(OBJ_F) $(OBJ_M)
				@$(CC) $(OBJ_F) $(OBJ_M) -o $(NAME)

all:			$(NAME)

clean:
				@$(RM) $(OBJ_M)
				@$(RM) $(OBJ_F)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:		all clean fclean re
