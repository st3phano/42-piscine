#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			sign;
	unsigned int	nb_unsigned;
	char			digit;

	if (nb < 0)
	{
		sign = -1;
		write(1, "-", 1);
	}
	else
		sign = 1;
	nb_unsigned = nb * sign;
	if (nb_unsigned > 9)
		ft_putnbr(nb_unsigned / 10);
	digit = '0' + (nb_unsigned % 10);
	write(1, &digit, 1);
}
