#include <unistd.h>

/*
 row is a CHAR
 distance is an INT
*/
char	can_place_queen(char *board, int cur_col, char row)
{
	int	distance;

	distance = 1;
	while (cur_col - distance >= 0)
	{
		if (row == board[cur_col - distance])
			return (0);
		else if (row - distance == board[cur_col - distance])
			return (0);
		else if (row + distance == board[cur_col - distance])
			return (0);
		++distance;
	}
	return (1);
}

int	ten_queens_puzzle(char *board, int col)
{
	char	row;
	int		possibilities;

	possibilities = 0;
	if (col == 10)
	{
		write(1, board, 10);
		write(1, "\n", 1);
		return (1);
	}
	else
	{
		row = '0';
		while (row <= '9')
		{
			if (can_place_queen(board, col, row))
			{
				board[col] = row;
				possibilities += ten_queens_puzzle(board, col + 1);
			}
			++row;
		}
	}
	return (possibilities);
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10];

	return (ten_queens_puzzle(board, 0));
}
