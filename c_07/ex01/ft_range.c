#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(*range));
	if (range == 0)
		return (0);
	i = 0;
	while (min + i < max)
	{
		range[i] = min + i;
		++i;
	}
	return (range);
}
