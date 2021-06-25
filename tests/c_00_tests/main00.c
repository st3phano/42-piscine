/*
norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror -o main main00.c ../$FOLDER/ex00/ft_putchar.c
*/

void	ft_putchar(char c);

int	main(void)
{
	for (int i = ' '; i < 127; ++i)
	{
		ft_putchar(i);
		ft_putchar(' ');
	}
	ft_putchar('\n');
	return (0);
}
