/*
norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror -o main main00.c ../$FOLDER/ex00/ft_iterative_factorial.c
*/
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	for (int i = -2; i < 14; ++i)
		printf("%d: %d\n", i, ft_iterative_factorial(i));

	return (0);
}
