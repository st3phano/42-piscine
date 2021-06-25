int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		++i;
	return (s1[i] - s2[i]);
}

/*
 it is possible to optimize the sorting by choosing a good pivot
*/
int	partition(char **str_array, int begin, int end)
{
	int		pivot;
	int		scan;
	char	*aux;

	pivot = end;
	scan = begin;
	while (scan < pivot)
	{
		if (ft_strcmp(str_array[scan], str_array[pivot]) < 0)
		{
			aux = str_array[begin];
			str_array[begin] = str_array[scan];
			str_array[scan] = aux;
			++begin;
		}
		++scan;
	}
	aux = str_array[begin];
	str_array[begin] = str_array[pivot];
	str_array[pivot] = aux;
	return (begin);
}

void	quick_sort(char **str_array, int begin, int end)
{
	int	pivot;

	if (begin < end)
	{
		pivot = partition(str_array, begin, end);
		quick_sort(str_array, begin, pivot - 1);
		quick_sort(str_array, pivot + 1, end);
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	len;

	len = 0;
	while (tab[len] != 0)
		++len;
	quick_sort(tab, 0, len - 1);
}
