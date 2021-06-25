#include <unistd.h>

void	putnbr(unsigned int unsigned_nb)
{
	char	digit;

	if (unsigned_nb > 9)
		putnbr(unsigned_nb / 10);
	digit = '0' + (unsigned_nb % 10);
	write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		putnbr(nb * -1);
	}
	else
		putnbr(nb);
}
