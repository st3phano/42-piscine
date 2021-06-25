/*
 it is possible to optimize the sorting by choosing a good pivot
*/
int	partition(int *array, int begin, int end)
{
	int	scan;
	int	aux;

	scan = begin;
	while (scan < end)
	{
		if (array[scan] < array[end])
		{
			aux = array[begin];
			array[begin] = array[scan];
			array[scan] = aux;
			++begin;
		}
		++scan;
	}
	aux = array[begin];
	array[begin] = array[end];
	array[end] = aux;
	return (begin);
}

void	quick_sort(int *array, int begin, int end)
{
	int	pivot;

	if (begin < end)
	{
		pivot = partition(array, begin, end);
		quick_sort(array, begin, pivot - 1);
		quick_sort(array, pivot + 1, end);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	quick_sort(tab, 0, size - 1);
}
