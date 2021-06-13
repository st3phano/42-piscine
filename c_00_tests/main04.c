/*
gcc -Wall -Wextra -Werror -o main main04.c ../$FOLDER/ex04/ft_is_negative.c
*/

#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	for (int i = -1; i < 2; ++i)
	{
		ft_is_negative(i);
		printf(" : %2d\n", i);
	}

	return (0);
}
