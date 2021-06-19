#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	i = 0;
	*range = malloc (size * 4);
	if (range == NULL)
		return (-1);
	while (i < size)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (size);
}
