/*
norminette -R CheckForbiddenSourceHeader
cc -Wall -Wextra -Werror -o rush-01 *.c
*/
#include <unistd.h>

int		fill_board(char board[4][4], char rules[16], int cur_row, int cur_col);

/*
 The length of the string must be 31
*/
char	validate_and_get_rules(char *arg, char rules[16])
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (arg[i] < '1' || arg[i] > '4')
				return (0);
			else if (i < 31)
				rules[i / 2] = arg[i];
		}
		else
		{
			if (arg[i] != ' ')
				return (0);
		}
		++i;
	}
	if (i == 31)
		return (1);
	else
		return (0);
}

int	print_board(char board[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			write(1, &board[row][col], 1);
			if (col < 3)
				write(1, " ", 1);
			++col;
		}
		write(1, "\n", 1);
		++row;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	char	rules[16];
	char	board[4][4];
	int		solved;

	if (argc != 2 || validate_and_get_rules(argv[1], rules) == 0)
		solved = 0;
	else
		solved = fill_board(board, rules, 0, 0);
	if (solved == 1)
		print_board(board);
	else
		write(1, "Error\n", 6);
	return (0);
}
