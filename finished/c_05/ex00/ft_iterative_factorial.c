int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 1)
	{
		factorial *= nb;
		--nb;
	}
	return (factorial);
}
