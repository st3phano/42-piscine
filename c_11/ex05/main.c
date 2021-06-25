#include <unistd.h>

int	add(int a, int b);
int	sub(int a, int b);
int	div(int a, int b);
int	mul(int a, int b);
int	mod(int a, int b);

void	get_operations_addresses(int (*operations_array[])(int, int))
{
	operations_array[0] = &add;
	operations_array[1] = &sub;
	operations_array[2] = &div;
	operations_array[3] = &mul;
	operations_array[4] = &mod;
}

int	get_operator(char *str)
{
	if (*str == '\0' || *(str + 1) != '\0')
		return (-1);
	else if (*str == '+')
		return (0);
	else if (*str == '-')
		return (1);
	else if (*str == '/')
		return (2);
	else if (*str == '*')
		return (3);
	else if (*str == '%')
		return (4);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	char	sign;
	int		nbr;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		++str;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	nbr = 0;
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - '0');
		++str;
	}
	return (nbr * sign);
}

void	ft_putnbr(int nbr)
{
	unsigned int	unsigned_nbr;
	char			digit;

	if (nbr < 0)
	{
		unsigned_nbr = nbr * -1;
		write(1, "-", 1);
	}
	else
		unsigned_nbr = nbr;
	if (unsigned_nbr > 9)
		ft_putnbr(unsigned_nbr / 10);
	digit = '0' + (unsigned_nbr % 10);
	write(1, &digit, 1);
}

int	main(int argc, char *argv[])
{
	int		operator;
	int		value1;
	int		value2;
	int		(*operations_array[5])(int, int);

	if (argc == 4)
	{
		get_operations_addresses(operations_array);
		operator = get_operator(argv[2]);
		value1 = ft_atoi(argv[1]);
		value2 = ft_atoi(argv[3]);
		if (operator == -1)
			write(1, "0", 1);
		else if (operator == 2 && value2 == 0)
			write(1, "Stop : division by zero", 23);
		else if (operator == 4 && value2 == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(operations_array[operator](value1, value2));
		write(1, "\n", 1);
	}
	return (0);
}
