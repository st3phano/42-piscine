/*
gcc -Wall -Wextra -Werror -o main main04.c ../$FOLDER/ex04/ft_is_sort.c
*/
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	a_minus_b(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int array1[] = {1, 2, 3, 4, 1};

	printf("%d\n", ft_is_sort(array1, 5, &a_minus_b));

	int array2[] = {1, 4, 3, 2, 1};

	printf("%d\n", ft_is_sort(array2, 5, &a_minus_b));

	int array3[] = {1, 1, 1, 1, 1};

	printf("%d\n", ft_is_sort(array3, 5, &a_minus_b));

	int array4[] = {1, 2, 3, 2, 1};

	printf("%d\n", ft_is_sort(array4, 5, &a_minus_b));

	int array5[] = {1, 3, 5, 7, 13};

	printf("%d\n", ft_is_sort(array5, 5, &a_minus_b));

	int array6[] = {14, 7, 2, 0, -1};

	printf("%d\n", ft_is_sort(array6, 5, &a_minus_b));

	return (0);
}
