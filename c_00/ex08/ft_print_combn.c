#include <unistd.h>

/*
 while (digit <= '9')
 can be optimized to reduce the number of function calls: 
 while (digit - '0' <= 10 - number_size + i)
*/
void	print_combn(char *number, int number_size, int i, char digit)
{
	if (i == number_size)
	{
		write(1, number, number_size);
		if (number[0] - '0' < 10 - number_size)
			write(1, ", ", 2);
	}
	else
	{
		while (digit <= '9')
		{
			number[i] = digit;
			print_combn(number, number_size, i + 1, digit + 1);
			++digit;
		}
	}
}

void	ft_print_combn(int n)
{
	char	number[9];

	if (n > 0 && n < 10)
		print_combn(number, n, 0, '0');
}
