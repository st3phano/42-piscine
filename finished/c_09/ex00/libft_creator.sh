#!/bin/sh
gcc -Wall -Wextra -Werror -c	ft_putchar.c \
								ft_putstr.c \
								ft_strcmp.c \
								ft_strlen.c \
								ft_swap.c

# The ar command creates, modify, or extract archives
# Syntax: ar [OPTIONS] archive_name member_files
# r: replace existing or insert new file(s) into the archive
ar -r libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
