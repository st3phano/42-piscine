/*
gcc -Wall -Wextra -Werror -o main main07.c ../$FOLDER/ex07/ft_rev_int_tab.c
*/
#include <stdio.h>
#define ODD_SIZE 3
#define EVEN_SIZE 2

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int array_odd[] = {1, 2, 3};
	int array_even[] = {1, 2, 3, 4};

	for (int i = 0; i < ODD_SIZE; ++i)
		printf("%d ", array_odd[i]);
	putchar('\n');

	ft_rev_int_tab(array_odd, ODD_SIZE);

	for (int i = 0; i < ODD_SIZE; ++i)
		printf("%d ", array_odd[i]);
	putchar('\n');

	for (int i = 0; i < EVEN_SIZE; ++i)
		printf("%d ", array_even[i]);
	putchar('\n');

	ft_rev_int_tab(array_even, EVEN_SIZE);

	for (int i = 0; i < EVEN_SIZE; ++i)
		printf("%d ", array_even[i]);
	putchar('\n');
	
	return (0);
}
