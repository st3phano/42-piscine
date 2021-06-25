/*
gcc -Wall -Wextra -Werror -o main main04.c ../$FOLDER/ex04/ft_putnbr_base.c
*/
#include <stdio.h>
#include <limits.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(INT_MIN, "");
	printf("| : %s|\n", "");
	ft_putnbr_base(0, "+");
	printf("| : %s|\n", "");
	ft_putnbr_base(INT_MAX, "-");
	printf("| : %s|\n", "");
	ft_putnbr_base(0, "010");
	printf("| : %s|\n", "");

	ft_putnbr_base(INT_MIN, "01");
	printf("| : %s|\n", "-10000000000000000000000000000000");
	ft_putnbr_base(0, "01");
	printf("| : %s|\n", "0");
	ft_putnbr_base(INT_MAX, "01");
	printf("| : %s|\n", "1111111111111111111111111111111");

	ft_putnbr_base(INT_MIN, "poneyvif");
	printf("| : %s|\n", "-npppppppppp");
	ft_putnbr_base(0, "poneyvif");
	printf("| : %s|\n", "p");
	ft_putnbr_base(INT_MAX, "poneyvif");
	printf("| : %s|\n", "offffffffff");

	ft_putnbr_base(INT_MIN, "0123456789");
	printf("| : %s|\n", "-2147483648");
	ft_putnbr_base(0, "0123456789");
	printf("| : %s|\n", "0");
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("| : %s|\n", "2147483647");

	ft_putnbr_base(INT_MIN, "0123456789ABCDEF");
	printf("| : %s|\n", "-80000000");
	ft_putnbr_base(0, "0123456789ABCDEF");
	printf("| : %s|\n", "0");
	ft_putnbr_base(INT_MAX, "0123456789ABCDEF");
	printf("| : %s|\n", "7FFFFFFF");

	ft_putnbr_base(10, ".\t");

	return (0);
}
