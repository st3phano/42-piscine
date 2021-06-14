#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	write(1, str, len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		++i;
	return (s1[i] - s2[i]);
}

int	partition(char **array, int begin, int end)
{
	int	pivot;
	int	scan;
	char	**aux;

	pivot = end;
	scan = begin;
	while (scan < pivot)
	{
		if (ft_strcmp(array[scan], array[pivot]) < 0)
		{
			aux = array + begin;
			array + begin = array + scan;
			array + scan = aux;
			++begin
		}
		++scan;
	}

	return ();
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

int	main(int argc, char *argv[])
{
	quick_sort(argv, 1, argc - 1);

	return (0);
}
