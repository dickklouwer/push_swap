# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tklouwer <tklouwer@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/05/30 13:24:22 by tklouwer      #+#    #+#                  #
#    Updated: 2022/09/22 16:49:55 by tklouwer      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
SRCS = push_swap.c \


SRCSDIR = srcs
OBJDIR = obj
INCLUDES = includes 
OBJ = $(addprefix $(OBJDIR)/,$(SRCS:.c=.o))
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBS = -I $(INCLUDES)
OPTIONS = -ar -rcT
LIBFT = libft/libft.a 
OBJ_LIBFT := $(shell find libft -name '.o')

all: $(NAME)

$(COMPILE):
	gcc includes/push_swap.h srcs/push_swap.c push_swap.a

$(NAME): $(OBJDIR) $(LIBFT) $(OBJ)
	$(OPTIONS) $(NAME) $(OBJ_LIBFT) $(OBJ)

$(OBJDIR)/%.o: $(addprefix $(SRCSDIR)/, %.c)
	$(CC) -c $(CFLAGS) $(LIBS) $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(LIBFT):
	$(MAKE) -C libft WITH_BONUS=1
	cp $(LIBFT) $(NAME) 


clean:
	$(MAKE) -C libft clean
	rm -f $(OBJDIR)

fclean:
	$(MAKE) -C libft fclean
	rm -f $(NAME) $(OBJ) $(PUSH_SWAP)
	rm -r $(OBJDIR)

re:	fclean all