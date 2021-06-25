int	ft_find_next_prime(int nb)
{
	char	is_prime;
	int		divisor;

	while (nb > 2)
	{
		is_prime = 1;
		divisor = 2;
		while (is_prime && divisor <= nb / divisor)
		{
			if (nb % divisor == 0)
				is_prime = 0;
			++divisor;
		}
		if (is_prime)
			return (nb);
		else
			++nb;
	}
	return (2);
}
