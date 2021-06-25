/*
gcc -Wall -Wextra -Werror -o main main04.c ../$FOLDER/ex04/ft_fibonacci.c
*/
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	for (int i = -2; i < 20; ++i)
		printf("%d: %d\n", i, ft_fibonacci(i));

	return (0);
}
