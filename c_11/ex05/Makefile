SRCS = main.c operations.c
OBJS = $(SRCS:.c=.o)
EXE = do-op
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f


all: $(EXE)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(EXE): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(EXE)

re: fclean all