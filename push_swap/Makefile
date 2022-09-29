# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tklouwer <tklouwer@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/05/30 13:24:22 by tklouwer      #+#    #+#                  #
#    Updated: 2022/09/28 14:06:56 by tklouwer      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
SRCS = push_swap.c \
		stack_utils.c \
		sort.c



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