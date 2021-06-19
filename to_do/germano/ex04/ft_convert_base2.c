int	ft_get_number_of_digits(long long int nb, int len)
{
	int	numb_of_digits;

	numb_of_digits = 0;
	if (nb  == 0)
		return (1);
	while (nb)
	{
		nb /= len;
		numb_of_digits++;
	}
	return (numb_of_digits);
}
