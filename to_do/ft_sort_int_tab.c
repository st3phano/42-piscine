void	quick_sort_core(int *tab, int *i, int *j)
{
	int	pivo;
	int	aux;

	pivo = tab[(*i + *j) / 2];
	while (*i <= *j)
	{
		while (tab[*i] < pivo)
			*i = *i + 1;
		while (tab[*j] > pivo)
			*j = *j - 1;
		if (*i <= *j)
		{
			aux = tab[*j];
			tab[*j] = tab[*i];
			tab[*i] = aux;
			*i = *i + 1;
			*j = *j - 1;
		}
	}
}

void	ft_sort_int_tab(int *tab, int size, int start, int end)
{
	int	i;
	int	j;

	if (start < 0 || start > size)
		start = 0;
	i = start;
	if (end < 0 || end > size)
		end = size - 1;
	j = end;
	quick_sort_core(tab, &i, &j);
	if (start < j)
		ft_sort_int_tab(tab, size, start, j);
	if (end > i)
		ft_sort_int_tab(tab, size, i, end);
}
