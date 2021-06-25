/*
gcc -Wall -Wextra -Werror -o main main03.c ../$FOLDER/ex03/ft_div_mod.c
*/
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a = 17;
	int	b = 0;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d/%d = %d r: %d\n", a, b, div, mod);
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d/%d = %d r: %d\n", a, b, div, mod);
	return (0);
}
