/*
gcc -Wall -Wextra -Werror -o main main02.c ../$FOLDER/ex02/ft_split.c
*/
#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char **dest = ft_split("111primeira222segunda333terceira111", "123");
	for (int i = 0; dest[i] != 0; ++i)
	{
		printf("%s|", dest[i]);
		free(dest[i]);
	}
	free(dest);
	putchar('\n');

	dest = ft_split("primeira222segunda333terceira", "123");
	for (int i = 0; dest[i] != 0; ++i)
	{
		printf("%s|", dest[i]);
		free(dest[i]);
	}
	free(dest);
	putchar('\n');

	dest = ft_split("222", "2");
	for (int i = 0; dest[i] != 0; ++i)
	{
		printf("%s|", dest[i]);
		free(dest[i]);
	}
	free(dest);
	putchar('\n');

	dest = ft_split("abcde", "");
	for (int i = 0; dest[i] != 0; ++i)
	{
		printf("%s|", dest[i]);
		free(dest[i]);
	}
	free(dest);
	putchar('\n');

	dest = ft_split("", "123");
	for (int i = 0; dest[i] != 0; ++i)
	{
		printf("%s|", dest[i]);
		free(dest[i]);
	}
	free(dest);
	putchar('\n');

	dest = ft_split("", "");
	for (int i = 0; dest[i] != 0; ++i)
	{
		printf("%s|", dest[i]);
		free(dest[i]);
	}
	free(dest);
	putchar('\n');

	return (0);
}
