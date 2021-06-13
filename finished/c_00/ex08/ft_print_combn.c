#include <unistd.h>

/*
 the line:
 (digit <= '9')
 can be optimized to reduce the number of function calls: 
 (digit - '0' <= 10 - number_size + i)
*/
void	print_combn(char *number_str, int number_size, int i, char digit)
{
	if (i == number_size)
	{
		write(1, number_str, number_size);
		if (number_str[0] - '0' < 10 - number_size)
			write(1, ", ", 2);
	}
	else
	{
		while (digit <= '9')
		{
			number_str[i] = digit;
			print_combn(number_str, number_size, i + 1, digit + 1);
			++digit;
		}
	}
}

void	ft_print_combn(int n)
{
	char	number_str[9];

	if (n > 0 && n < 10)
		print_combn(number_str, n, 0, '0');
}
