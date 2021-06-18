/*
norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror -o main main01.c ../$FOLDER/ex01/ft_range.c
*/
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*range;

	int min = -5;
	int max = -1;
	range = ft_range(min, max);
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = -5;
	max = 0;
	range = ft_range(min, max);
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = -5;
	max = 5;
	range = ft_range(min, max);
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = 0;
	max = 5;
	range = ft_range(min, max);
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = 5;
	max = 10;
	range = ft_range(min, max);
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = -5;
	max = -5;
	range = ft_range(min, max);
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	min = 5;
	max = 0;
	range = ft_range(min, max);
	if (range != 0)
	{
		for (int i = 0; i < max - min; ++i)
			printf("%d ", range[i]);
		putchar('\n');
		free(range);
	}

	return (0);
}
