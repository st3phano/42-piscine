/*
 Retorna o número de elementos da matriz que,
 ao serem passados para a função f, não retornam 0
*/
int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	non_zero_count;
	int	i;

	non_zero_count = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			++non_zero_count;
		++i;
	}
	return (non_zero_count);
}
