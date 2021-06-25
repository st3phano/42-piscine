#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	nb_unsigned;
	char			digit;

	if (nb < 0)
	{
		nb_unsigned = nb * -1;
		write(1, "-", 1);
	}
	else
		nb_unsigned = nb;
	if (nb_unsigned > 9)
		ft_putnbr(nb_unsigned / 10);
	digit = '0' + (nb_unsigned % 10);
	write(1, &digit, 1);
}
