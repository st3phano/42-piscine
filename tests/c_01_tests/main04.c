/*
gcc -Wall -Wextra -Werror -o main main04.c ../$FOLDER/ex04/ft_ultimate_div_mod.c
*/
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a = 17;
	int	b = 0;

	printf("%d/%d = ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d r: %d\n", a, b);
	b = 3;
	printf("%d/%d = ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d r: %d\n", a, b);
	return (0);
}
