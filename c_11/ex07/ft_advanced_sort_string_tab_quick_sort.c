/*
 it is possible to optimize the sorting by choosing a good pivot
*/
int	partition(char **array, int begin, int end, int(*cmp)(char *, char *))
{
	int		pivot;
	int		scan;
	char	*aux;

	pivot = end;
	scan = begin;
	while (scan < pivot)
	{
		if ((*cmp)(array[scan], array[pivot]) < 0)
		{
			aux = array[begin];
			array[begin] = array[scan];
			array[scan] = aux;
			++begin;
		}
		++scan;
	}
	aux = array[begin];
	array[begin] = array[pivot];
	array[pivot] = aux;
	return (begin);
}

void	quick_sort(char **array, int begin, int end, int(*cmp)(char *, char *))
{
	int	pivot;

	if (begin < end)
	{
		pivot = partition(array, begin, end, cmp);
		quick_sort(array, begin, pivot - 1, cmp);
		quick_sort(array, pivot + 1, end, cmp);
	}
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	len;

	len = 0;
	while (tab[len] != 0)
		++len;
	quick_sort(tab, 0, len - 1, cmp);
}
