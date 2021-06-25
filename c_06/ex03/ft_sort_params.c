#include <unistd.h>

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
int	partition(char **array, int begin, int end)
{
	int		pivot;
	int		scan;
	char	*aux;

	pivot = end;
	scan = begin;
	while (scan < pivot)
	{
		if (ft_strcmp(array[scan], array[pivot]) < 0)
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

void	quick_sort(char **array, int begin, int end)
{
	int	pivot;

	if (begin < end)
	{
		pivot = partition(array, begin, end);
		quick_sort(array, begin, pivot - 1);
		quick_sort(array, pivot + 1, end);
	}
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	write(1, str, len);
}

int	main(int argc, char *argv[])
{
	int	current_arg;

	current_arg = 1;
	quick_sort(argv, current_arg, argc - 1);
	while (current_arg < argc)
	{
		ft_putstr(argv[current_arg]);
		write (1, "\n", 1);
		++current_arg;
	}
	return (0);
}
