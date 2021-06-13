/*
gcc -Wall -Wextra -Werror -o main main07.c ../$FOLDER/ex07/ft_putnbr.c
*/

#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(INT_MIN);
	printf(" : %d\n", INT_MIN);

	ft_putnbr(0);
	printf(" : %d\n", 0);

	ft_putnbr(INT_MAX);
	printf(" : %d\n", INT_MAX);

	ft_putnbr(-1);
	printf(" : %d\n", -1);

	ft_putnbr(1);
	printf(" : %d\n", 1);

	return (0);
}
