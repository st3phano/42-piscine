/*
gcc -Wall -Wextra -Werror -lbsd -o main main10.c ../$FOLDER/ex10/ft_strlcpy.c
*/
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src1[] = "1234567890";
	char dest1[] = "abcdefghij";

	char src2[] = "1234567890";
	char dest2[] = "abcdefghij";

	printf("strlcpy 0:\t%zu, %s\n", strlcpy(dest1, src1, 0), dest1);
	printf("ft_strlcpy 0:\t%u, %s\n", ft_strlcpy(dest2, src2, 0), dest2);

	printf("strlcpy 1:\t%zu, %s\n", strlcpy(dest1, src1, 1), dest1);
	printf("ft_strlcpy 1:\t%u, %s\n", ft_strlcpy(dest2, src2, 1), dest2);

	printf("strlcpy 10:\t%zu, %s\n", strlcpy(dest1, src1, 10), dest1);
	printf("ft_strlcpy 10:\t%u, %s\n", ft_strlcpy(dest2, src2, 10), dest2);

	printf("strlcpy 20:\t%zu, %s\n", strlcpy(dest1, src1, 20), dest1);
	printf("ft_strlcpy 20:\t%u, %s\n", ft_strlcpy(dest2, src2, 20), dest2);
	return (0);
}
