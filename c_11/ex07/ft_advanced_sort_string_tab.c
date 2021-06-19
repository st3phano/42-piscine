void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		len;
	int		i;
	int		j;
	char	*aux;

	len = 0;
	while (tab[len] != 0)
		++len;
	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1 - i)
		{
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
			}
			++j;
		}
		++i;
	}
}
