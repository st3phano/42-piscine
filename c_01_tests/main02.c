/*
gcc -Wall -Wextra -Werror -o main main02.c ../$FOLDER/ex02/ft_swap.c
*/
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a = 1;
	int	b = 2;

	printf("a: %d\tb: %d\n", a, b);
	ft_swap(&a, &b);
	printf("a: %d\tb: %d\n", a, b);
	return (0);
}
