#include <unistd.h>

unsigned int	get_base_len(char *base)
{
	unsigned int	cur_i;
	unsigned int	prev_i;

	cur_i = 0;
	while (base[cur_i] != '\0')
	{
		if (base[cur_i] == '+' || base[cur_i] == '-')
			return (0);
		prev_i = 0;
		while (prev_i < cur_i)
		{
			if (base[prev_i] == base[cur_i])
				return (0);
			++prev_i;
		}
		++cur_i;
	}
	return (cur_i);
}

void	putnbr_base(unsigned int nbr, char *base, unsigned int base_len)
{
	if (nbr >= base_len)
		putnbr_base(nbr / base_len, base, base_len);
	write(1, base + (nbr % base_len), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	unsigned_nbr;

	base_len = get_base_len(base);
	if (base_len < 2)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		unsigned_nbr = nbr * -1;
	}	
	else
		unsigned_nbr = nbr;
	putnbr_base(unsigned_nbr, base, base_len);
}
