#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char		n;
	int			a;
	char		arr[10];
	int			var;
	long int	nbr;

	var = 9;
	a = 0;
	nbr = nb;
	if (nb < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	while (a == 0)
	{
		n = nbr % 10 + '0';
		if (nbr / 10 == 0)
			a = 1;
		nbr /= 10;
		arr[var] = n;
		var--;
	}
	while (var++ <= 9)
		ft_putchar(arr[var]);
}
