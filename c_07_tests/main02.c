/*
norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror -o main main02.c ../$FOLDER/ex02/ft_ultimate_range.c
*/
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;

	int min = -5;
	int max = -1;
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = -5;
	max = 0;
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = -5;
	max = 5;
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = 0;
	max = 5;
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = 5;
	max = 10;
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = -5;
	max = -5;
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = 5;
	max = 0;
	printf("range size: %d\n", ft_ultimate_range(&range, min, max));
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	return (0);
}
