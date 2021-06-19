#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (max <= min)
	{
		*range = NULL;
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		range[0][i] = i + min;
		i++;
	}
	return (max - min);
}
