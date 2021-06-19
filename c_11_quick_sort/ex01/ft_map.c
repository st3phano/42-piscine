#include <stdlib.h>

/*
 malloc(): If SIZE is 0, then malloc() returns either NULL,
 or a unique pointer value that can later be successfully passed to free()
*/
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*mapped_tab;
	int	i;

	if (length < 1)
		return (0);
	mapped_tab = malloc(length * sizeof(*mapped_tab));
	if (mapped_tab != 0)
	{
		i = 0;
		while (i < length)
		{
			mapped_tab[i] = (*f)(tab[i]);
			++i;
		}
	}
	return (mapped_tab);
}
