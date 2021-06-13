/*
gcc -Wall -Wextra -Werror -o main main01.c ../$FOLDER/ex01/ft_strncpy.c
*/
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[] = "123456789 abcdefghi";
	char dest[] = "---------";

	// compare with strncpy()
	printf("return\t=\t%s\n", ft_strncpy(dest, src, 5));
	printf("dest\t=\t%s\n", dest);
	return (0);
}
