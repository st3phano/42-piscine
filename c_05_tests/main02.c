/*
gcc -Wall -Wextra -Werror -o main main02.c ../$FOLDER/ex02/ft_iterative_power.c
*/
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	for (int i = -2; i < 11; ++i)
		printf("%d: %d\n", i, ft_iterative_power(i, i));

	return (0);
}
