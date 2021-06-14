int	pass_col_up_rule(char board[4][4], int col, char expected_visible_boxes);
int	pass_col_down_rule(char board[4][4], int col, char expected_visible_boxes);
int	pass_row_left_rule(char row[4], char expected_visible_boxes);
int	pass_row_right_rule(char row[4], char expected_visible_boxes);
int	box_is_unique(char board[4][4], int cur_row, int cur_col, char box);
int	fill_board(char board[4][4], char rules[4*4], int row, int col);

/*
						RULES[16]:
0[col1up]		1[col2up]		2[col3up]		3[col4up]
4[col1down]		5[col2down]		6[col3down]		7[col4down]
8[row1left]		9[row2left]		10[row3left]	11[row4left]
12[row1right]	13[row2right]	14[row3right]	15[row4right]
*/
int	col_is_valid(char board[4][4], int col, char rules[4*4])
{
	if (pass_col_up_rule(board, col, rules[col]) == 0)
		return (0);
	if (pass_col_down_rule(board, col, rules[4 + col]) == 0)
		return (0);
	return (1);
}

int	row_is_valid(char board[4][4], int row, char rules[4*4])
{
	if (pass_row_left_rule(board[row], rules[4 * 2 + row]) == 0)
		return (0);
	if (pass_row_right_rule(board[row], rules[4 * 3 + row]) == 0)
		return (0);
	return (1);
}

int	validate_row_col(char board[4][4], char rules[4*4], int row, int col)
{
	int	is_valid;

	is_valid = 0;
	if (row == 4 - 1 && col == 4 - 1)
	{
		if (col_is_valid(board, col, rules) && row_is_valid(board, row, rules))
			is_valid = fill_board(board, rules, row + 1, 0);
	}
	else if (row == 4 - 1)
	{
		if (col_is_valid(board, col, rules))
			is_valid = fill_board(board, rules, row, col + 1);
	}
	else if (col == 4 - 1)
	{
		if (row_is_valid(board, row, rules))
			is_valid = fill_board(board, rules, row + 1, 0);
	}
	else
	{
		is_valid = fill_board(board, rules, row, col + 1);
	}
	return (is_valid);
}

int	fill_board(char board[4][4], char rules[4*4], int row, int col)
{
	char	box;
	int		solved;

	solved = 0;
	if (row == 4)
		solved = 1;
	else
	{
		box = '1';
		while (box <= '0' + 4 && solved == 0)
		{
			if (box_is_unique(board, row, col, box) == 1)
			{
				board[row][col] = box;
				solved = validate_row_col(board, rules, row, col);
			}
			++box;
		}
	}
	return (solved);
}
