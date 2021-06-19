/*
 Retorna 1 se a matriz estiver ordenada e 0 caso contrário
 A função passada como parâmetro retornará
 um inteiro negativo se AGR1 < AGR2 (crescente)
 0 se AGR1 == AGR2,
 um inteiro positivo AGR1 > AGR2 (decrescente)
*/
int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	if (length < 3)
		return (1);
	i = 0;
	if ((*f)(tab[0], tab[length - 1]) < 0)
	{
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			++i;
		}
	}
	else
	{
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) < 0)
				return (0);
			++i;
		}
	}
	return (1);
}
