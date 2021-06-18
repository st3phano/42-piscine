/*
gcc -Wall -Wextra -Werror -o main main01.c ../$FOLDER/ex01/ft_map.c
*/
#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int));

int	minus_nbr(int nbr)
{
	return (-nbr);
}

int	main(void)
{
	int src[] = {-100, 0, 20, 42, 100};
	int *dest;

	dest = ft_map(src, -1, &minus_nbr);
	printf("%p\n", dest);
	free(dest);

	dest = ft_map(src, 0, &minus_nbr);
	printf("%p\n", dest);
	free(dest);

	dest = ft_map(src, 5, &minus_nbr);
	printf("%p\n", dest);
	for (int i = 0; i < 5; ++i)
		printf("size 5: %d\n", dest[i]);
	free(dest);
	
	return (0);
}
