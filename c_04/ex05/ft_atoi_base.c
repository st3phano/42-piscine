char	is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

int	get_base_len(char *base)
{
	int	cur_i;
	int	prev_i;

	cur_i = 0;
	while (base[cur_i] != '\0')
	{
		if (is_space(base[cur_i]) || base[cur_i] == '+' || base[cur_i] == '-')
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

int	get_base_index(char c, char *base, int *index)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
		{
			*index = i;
			return (i);
		}
		++i;
	}
	*index = -1;
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		base_len;
	char	sign;
	int		integer;
	int		base_index;

	base_len = get_base_len(base);
	if (base_len < 2)
		return (0);
	while (is_space(*str))
		++str;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	integer = 0;
	while (get_base_index(*str, base, &base_index) != -1)
	{
		integer = (integer * base_len) + base_index;
		++str;
	}
	return (integer * sign);
}
