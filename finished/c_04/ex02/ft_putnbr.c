#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	unsigned_nb;
	char			digit;

	if (nb < 0)
	{
		write(1, "-", 1);
		unsigned_nb = nb * -1;
	}
	else
		unsigned_nb = nb;
	if (unsigned_nb > 9)
		ft_putnbr(unsigned_nb / 10);
	digit = '0' + (unsigned_nb % 10);
	write(1, &digit, 1);
}
