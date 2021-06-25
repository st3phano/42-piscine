#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	unsigned_nb;
	unsigned int	nb_size;
	char			digit;

	if (nb < 0)
	{
		unsigned_nb = nb * -1;
		write(1, "-", 1);
	}
	else
		unsigned_nb = nb;
	nb_size = 1;
	while (unsigned_nb / nb_size > 9)
		nb_size *= 10;
	while (nb_size > 0)
	{
		digit = '0' + unsigned_nb / nb_size;
		write(1, &digit, 1);
		unsigned_nb %= nb_size;
		nb_size /= 10;
	}
}
