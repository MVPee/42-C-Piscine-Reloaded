# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvan-pee <mvan-pee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 13:44:49 by mvan-pee          #+#    #+#              #
#    Updated: 2023/10/10 13:44:49 by mvan-pee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = srcs
INCDIR = includes

# Source files and object files
SRC = $(addprefix $(SRCDIR)/, \
	ft_putchar.c \
	ft_swap.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_strcmp.c \
)

OBJ = $(SRC:.c=.o)

# Output library
NAME = libft.a

# Targets
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re