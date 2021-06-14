/*
gcc -Wall -Wextra -Werror -o main main07.c ../$FOLDER/ex07/ft_find_next_prime.c
*/
#include <stdio.h>
#include <limits.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int i;

	i = INT_MIN;
	printf("%d: %d\n", i, ft_find_next_prime(i));

	i = -1;
	printf("%d: %d\n", i, ft_find_next_prime(i));

	i = 0;
	printf("%d: %d\n", i, ft_find_next_prime(i));

	i = 1;
	printf("%d: %d\n", i, ft_find_next_prime(i));

	i = 2;
	printf("%d: %d\n", i, ft_find_next_prime(i));

	i = 3;
	printf("%d: %d\n", i, ft_find_next_prime(i));

	i = 4;
	printf("%d: %d\n", i, ft_find_next_prime(i));

	i = 2147395600;
	printf("%d: %d\n", i, ft_find_next_prime(i));

	i = INT_MAX - 100;
	printf("%d: %d\n", i, ft_find_next_prime(i));	

	i = INT_MAX;
	printf("%d: %d\n", i, ft_find_next_prime(i));

	return (0);
}
