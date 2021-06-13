#define TOP_LEFT 'o'
#define TOP_RIGHT 'o'
#define BOTTOM_LEFT 'o'
#define BOTTOM_RIGHT 'o'
#define TOP_AND_BOTTOM_MID '-'
#define LEFT_RIGHT_SIDES '|'
#define FILL ' '

void	ft_putchar(char c);

void	put_cur_pos(int last_column, int last_row, int cur_column, int cur_row)
{
	if (cur_row == 1)
	{
		if (cur_column == 1)
			ft_putchar(TOP_LEFT);
		else if (cur_column == last_column)
			ft_putchar(TOP_RIGHT);
		else
			ft_putchar(TOP_AND_BOTTOM_MID);
	}
	else if (cur_row == last_row)
	{
		if (cur_column == 1)
			ft_putchar(BOTTOM_LEFT);
		else if (cur_column == last_column)
			ft_putchar(BOTTOM_RIGHT);
		else
			ft_putchar(TOP_AND_BOTTOM_MID);
	}
	else
	{
		if (cur_column == 1 || cur_column == last_column)
			ft_putchar(LEFT_RIGHT_SIDES);
		else
			ft_putchar(FILL);
	}
}

void	rush(int x, int y)
{
	int	current_column;
	int	current_row;

	if (x < 1 || y < 1)
		return ;
	current_row = 1;
	while (current_row <= y)
	{
		current_column = 1;
		while (current_column <= x)
		{
			put_cur_pos(x, y, current_column, current_row);
			++current_column;
		}
		ft_putchar('\n');
		++current_row;
	}
}
