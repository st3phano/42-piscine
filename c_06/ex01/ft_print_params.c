#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	write(1, str, len);
}

int	main(int argc, char *argv[])
{
	int	current_arg;

	current_arg = 1;
	while (current_arg < argc)
	{
		ft_putstr(argv[current_arg]);
		write(1, "\n", 1);
		++current_arg;
	}
	return (0);
}
