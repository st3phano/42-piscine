#include <unistd.h>

// number must be greater or equal to 0 and less than 100
void	print_number(int number)
{
	char	digit;

	digit = '0' + (number / 10);
	write(1, &digit, 1);
	digit = '0' + (number % 10);
	write(1, &digit, 1);
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	while (first_number < 99)
	{
		second_number = first_number + 1;
		while (second_number < 100)
		{
			print_number(first_number);
			write(1, " ", 1);
			print_number(second_number);
			if (first_number < 98)
				write(1, ", ", 2);
			++second_number;
		}
		++first_number;
	}
}
