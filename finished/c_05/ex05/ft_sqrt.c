int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	while (sqrt < nb / sqrt)
		++sqrt;
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}
