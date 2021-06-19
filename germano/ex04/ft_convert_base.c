#include <stdlib.h>
int	ft_get_number_of_digits(long long int nb, int len);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_last_valid_index(char *str, char *base)
{
	int	i;
	int	is_a_char_base;
	int	j;

	i = 0;
	is_a_char_base = 1;
	while (str[i] == '\v' || str[i] == '\f' || str[i] == ' '
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (is_a_char_base)
	{
		is_a_char_base = 0;
		j = -1;
		while (++j < ft_strlen(base))
			if (str[i] == base[j])
				is_a_char_base = 1;
		i++;
	}
	return (i - 2);
}

long long int	ft_atoi(char *str, char *base_from, int *parity)
{
	long long int	nb;
	int				j;
	int				base_power;
	int				last_index;

	nb = 0;
	base_power = 1;
	last_index = ft_last_valid_index(str, base_from);
	while (last_index != -1)
	{
		if (str[last_index] == '-')
			(*parity)++;
		j = -1;
		while (++j < ft_strlen(base_from))
		{
			if (str[last_index] == base_from[j])
			{
				nb += base_power * j;
				base_power *= ft_strlen(base_from);
			}
		}
		last_index--;
	}
	return (nb);
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;
	int	used_char[350];

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = -1;
		while (++j < i)
			if (base[i] == used_char[j])
				return (0);
		used_char[i] = base[i];
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long int	numb;
	int				parity;
	int				to_len;
	int				numb_of_digits;
	char			*result;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (0);
	numb = ft_atoi(nbr, base_from, &parity);
	to_len = ft_strlen(base_to);
	numb_of_digits = ft_get_number_of_digits(numb, to_len);
	result = malloc(sizeof(char) * (numb_of_digits + parity % 2));
	if (result == 0)
		return (0);
	if (parity % 2)
		result[0] = '-';
	result[numb_of_digits + parity % 2] = '\0';
	numb_of_digits--;
	while (numb_of_digits >= 0 )
	{
		result[numb_of_digits] = base_to[(numb % to_len)];
		numb /= to_len;
		numb_of_digits--;
	}
	return (result);
}
