#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc (size * 4);
	while (min < max)
	{
		*range = min;
		min++;
		range++;
	}
	return (range - size);
}
