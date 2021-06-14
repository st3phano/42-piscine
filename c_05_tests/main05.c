/*
gcc -Wall -Wextra -Werror -o main main05.c ../$FOLDER/ex05/ft_sqrt.c
*/
#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int i;

	i = INT_MIN;
	printf("%d: %d\n", i, ft_sqrt(i));

	i = -4;
	printf("%d: %d\n", i, ft_sqrt(i));

	i = -1;
	printf("%d: %d\n", i, ft_sqrt(i));

	i = 0;
	printf("%d: %d\n", i, ft_sqrt(i));

	i = 1;
	printf("%d: %d\n", i, ft_sqrt(i));

	i = 2;
	printf("%d: %d\n", i, ft_sqrt(i));

	i = 2147395600;
	printf("%d: %d\n", i, ft_sqrt(i));

	i = INT_MAX - 1;
	printf("%d: %d\n", i, ft_sqrt(i));	

	i = INT_MAX;
	printf("%d: %d\n", i, ft_sqrt(i));

	return (0);
}
