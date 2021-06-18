#include <stdlib.h>

int	get_base_len(char *base)
{
	int	i_cur;
	int	i_prev;

	i_cur = 0;
	while (base[i_cur] != '\0')
	{
		if ((base[i_cur] >= '\t' && base[i_cur] <= '\r') || base[i_cur] == ' ')
			return (0);
		else if (base[i_cur] == '+' || base[i_cur] == '-')
			return (0);
		i_prev = 0;
		while (i_prev < i_cur)
		{
			if (base[i_prev] == base[i_cur])
				return (0);
			++i_prev;
		}
		++i_cur;
	}
	return (i_cur);
}

int	get_index(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int	atoi_base(char *nbr, char *base, int base_len)
{
	char	sign;
	int		base_index;
	int		nbr_int;

	while ((*nbr >= '\t' && *nbr <= '\r') || *nbr == ' ')
		++nbr;
	sign = 1;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		++nbr;
	}
	nbr_int = 0;
	base_index = get_index(*nbr, base);
	while (base_index != -1)
	{
		nbr_int = (nbr_int * base_len) + base_index;
		++nbr;
		base_index = get_index(*nbr, base);
	}
	return (nbr_int * sign);
}

int	get_nbr_len_base(int nbr, int base_len)
{
	int	nbr_str_len;

	if (nbr < 1)
		nbr_str_len = 1;
	else
		nbr_str_len = 0;
	while (nbr != 0)
	{
		++nbr_str_len;
		nbr /= base_len;
	}
	return (nbr_str_len);
}

/*
 REMINDER TO FIX THIS MESSED UP FUNCTION AFTER BASECAMP
*/
char	*itoa_base(int nbr, char *base, int base_len)
{
	int				nbr_str_len;
	char			*nbr_str;
	char			sign;
	unsigned int	nbr_unsigned;

	nbr_str_len = get_nbr_len_base(nbr, base_len);
	nbr_str = malloc((nbr_str_len + 1) * sizeof(*nbr_str));
	if (nbr_str == 0)
		return (0);
	sign = (nbr < 0);
	if (sign)
	{
		nbr_unsigned = nbr * -1;
		*nbr_str = '-';
	}
	else
		nbr_unsigned = nbr;
	nbr_str[nbr_str_len--] = '\0';
	while (nbr_str_len >= sign)
	{
		nbr_str[nbr_str_len] = base[nbr_unsigned % base_len];
		nbr_unsigned /= base_len;
		--nbr_str_len;
	}
	return (nbr_str);
}
