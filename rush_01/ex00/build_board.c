int	pass_col_up_rule(char board[4][4], int col, char expected_visible_boxes);
int	pass_col_down_rule(char board[4][4], int col, char expected_visible_boxes);
int	pass_row_left_rule(char row[4], char expected_visible_boxes);
int	pass_row_right_rule(char row[4], char expected_visible_boxes);
int	box_is_unique(char board[4][4], int cur_row, int cur_col, char box);

/*
						RULES[16]:
0[col1up]		1[col2up]		2[col3up]		3[col4up]
4[col1down]		5[col2down]		6[col3down]		7[col4down]
8[row1left]		9[row2left]		10[row3left]	11[row4left]
12[row1right]	13[row2right]	14[row3right]	15[row4right]
*/
int	is_valid_board(char board[4][4], char rules[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (pass_col_up_rule(board, i, rules[i]) == 0)
			return (0);
		if (pass_col_down_rule(board, i, rules[4 + i]) == 0)
			return (0);
		if (pass_row_left_rule(board[i], rules[8 + i]) == 0)
			return (0);
		if (pass_row_right_rule(board[i], rules[12 + i]) == 0)
			return (0);
		++i;
	}
	return (1);
}

int	fill_board(char board[4][4], char rules[16], int cur_row, int cur_col)
{
	char	box;
	int		solved;

	solved = 0;
	if (cur_row == 4 && is_valid_board(board, rules) == 1)
		solved = 1;
	else
	{
		box = '1';
		while (box <= '4' && solved == 0)
		{
			if (box_is_unique(board, cur_row, cur_col, box) == 1)
			{
				board[cur_row][cur_col] = box;
				if (cur_col == 3)
					solved = fill_board(board, rules, cur_row + 1, 0);
				else
					solved = fill_board(board, rules, cur_row, cur_col + 1);
			}
			++box;
		}
	}
	return (solved);
}
