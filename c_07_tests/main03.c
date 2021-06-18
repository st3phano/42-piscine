/*
gcc -Wall -Wextra -Werror -o main main03.c ../$FOLDER/ex03/ft_strjoin.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *src[] = {"a1", "b", "c2", "d", "e3"};

	char *dest = ft_strjoin(5, src, "/-/");
	printf("%s|\n", dest);
	free(dest);

	return (0);
}
