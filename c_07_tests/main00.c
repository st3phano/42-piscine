/*
norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror -o main main00.c ../$FOLDER/ex00/ft_strdup.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *src[] = {"", "1", "abcde", "\t", 0};
	char *dest;

	int i = 0;
	while (src[i] != 0)
	{
		dest = strdup(src[i]);
		if (dest != 0)
			printf("or: %s| src: %p dest: %p\n", dest, src[i], dest);
		free(dest);
		dest = ft_strdup(src[i]);
		if (dest != 0)
			printf("ft: %s| src: %p dest: %p\n", dest, src[i], dest);
		free(dest);

		++i;
	}

	char negative_src[] = {-40, -30, -20, -10, 0};
	dest = strdup(negative_src);
	if (dest != 0)
		printf("or: %s| src: %p dest: %p\n", dest, negative_src, dest);
	free(dest);
	dest = ft_strdup(negative_src);
	if (dest != 0)
		printf("ft: %s| src: %p dest: %p\n", dest, negative_src, dest);
	free(dest);

	// dest = strdup(0);
	// if (dest != 0)
	// 	printf("or: %s| dest: %p\n", dest, dest);
	// free(dest);
	// dest = ft_strdup(0);
	// if (dest != 0)
	// 	printf("ft: %s| dest: %p\n", dest, dest);
	// free(dest);

	return (0);
}
