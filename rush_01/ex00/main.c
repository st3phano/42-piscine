/*
norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror -o main main.c
*/
#include <unistd.h>

void print_table(char **table)
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			write(1, table[row] + col, 1);
			write(1, " ", 1);
			++col;
		}
		write(1, "\n", 1);
		++row;
	}
}

char	can_place_box(char **table, int cur_row, int cur_col, char box)
{
	int prev_row;
	int	prev_col;

	prev_row = 0;
	while (prev_row < cur_row)
	{
		if (table[prev_row][cur_col] == box)
			return (0);
		++prev_row;
	}
	prev_col = 0;
	while (prev_col < cur_col)
	{
		if (table[cur_row][prev_col] == box)
			return (0);
		++prev_col;
	}
	return (1);
}

void	fill_table(char **table, int cur_row, int cur_col)
{
	char	box;

	if (cur_row == 4)
		print_table(table);
	else
	{
		box = '1';
		while (box < '5')
		{
			if (can_place_box(table, cur_row, cur_col, box))
			{
				table[cur_row][cur_col] = box;
				if (cur_col == 4)
					fill_table(table, cur_row + 1, 0);
				else
					fill_table(table, cur_row, cur_col + 1);
			}
			++box;
		}
	}
}

int	main(void)
{
	char	table[4][4];

	fill_table(table, 0, 0);
	return (0);
}
