#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	write(1, str, len);
}

void	ft_putnbr(int nbr)
{
	unsigned int	unsigned_nbr;
	char			digit;

	if (nbr < 0)
	{
		write(1, "-", 1);
		unsigned_nbr = nbr * -1;
	}
	else
		unsigned_nbr = nbr;
	if (unsigned_nbr > 9)
		ft_putnbr(unsigned_nbr / 10);
	digit = '0' + (unsigned_nbr % 10);
	write(1, &digit, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (par == 0)
		return ;
	while (par->str != 0)
	{
		ft_putstr(par->str);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		ft_putstr(par->copy);
		write(1, "\n", 1);
		++par;
	}
}
