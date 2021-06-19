#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*vector;
	int	i;

	if (min >= max)
		return (0);
	vector = (int *) malloc(sizeof(int) * (max - min));
	if (vector == NULL)
		return (0);
	i = 0;
	while (i < max - min)
	{
		vector[i] = i + min;
		i++;
	}
	return (vector);
}
