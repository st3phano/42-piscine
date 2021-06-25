/*
gcc -Wall -Wextra -Werror -o main main03.c ../$FOLDER/ex03/ft_recursive_power.c
*/
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	for (int i = -2; i < 11; ++i)
		printf("%d: %d\n", i, ft_recursive_power(i, i));

	return (0);
}
