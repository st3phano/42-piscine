/*
gcc -Wall -Wextra -Werror -o main main01.c ../$FOLDER/ex01/ft_recursive_factorial.c
*/
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	for (int i = -2; i < 14; ++i)
		printf("%d: %d\n", i, ft_recursive_factorial(i));

	return (0);
}
