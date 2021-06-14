int	pass_col_up_rule(char board[4][4], int col, char expected_visible_boxes)
{
	char	highest_box;
	char	visible_boxes;
	int		row;

	highest_box = '0';
	visible_boxes = '0';
	row = 0;
	while (row < 4)
	{
		if (board[row][col] > highest_box)
		{
			highest_box = board[row][col];
			++visible_boxes;
		}
		++row;
	}
	if (visible_boxes == expected_visible_boxes)
		return (1);
	else
		return (0);
}

int	pass_col_down_rule(char board[4][4], int col, char expected_visible_boxes)
{
	char	highest_box;
	char	visible_boxes;
	int		row;

	highest_box = '0';
	visible_boxes = '0';
	row = 3;
	while (row >= 0)
	{
		if (board[row][col] > highest_box)
		{
			highest_box = board[row][col];
			++visible_boxes;
		}
		--row;
	}
	if (visible_boxes == expected_visible_boxes)
		return (1);
	else
		return (0);
}

int	pass_row_left_rule(char row[4], char expected_visible_boxes)
{
	char	highest_box;
	char	visible_boxes;
	int		col;

	highest_box = '0';
	visible_boxes = '0';
	col = 0;
	while (col < 4)
	{
		if (row[col] > highest_box)
		{
			highest_box = row[col];
			++visible_boxes;
		}
		++col;
	}
	if (visible_boxes == expected_visible_boxes)
		return (1);
	else
		return (0);
}

int	pass_row_right_rule(char row[4], char expected_visible_boxes)
{
	char	highest_box;
	char	visible_boxes;
	int		col;

	highest_box = '0';
	visible_boxes = '0';
	col = 3;
	while (col >= 0)
	{
		if (row[col] > highest_box)
		{
			highest_box = row[col];
			++visible_boxes;
		}
		--col;
	}
	if (visible_boxes == expected_visible_boxes)
		return (1);
	else
		return (0);
}

int	box_is_unique(char board[4][4], int cur_row, int cur_col, char box)
{
	int	prev_col;
	int	prev_row;

	prev_col = 0;
	while (prev_col < cur_col)
	{
		if (board[cur_row][prev_col] == box)
			return (0);
		++prev_col;
	}
	prev_row = 0;
	while (prev_row < cur_row)
	{
		if (board[prev_row][cur_col] == box)
			return (0);
		++prev_row;
	}
	return (1);
}
