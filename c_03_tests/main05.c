/*
gcc -Wall -Wextra -Werror -lbsd -o main main05.c ../$FOLDER/ex05/ft_strlcat.c
*/
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest1[99] = "123456789";
	char dest2[99] = "123456789";

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 0: %zu, %s\n", strlcat(dest1, "", 0), dest1);
	printf("ft 0: %u, %s\n\n", ft_strlcat(dest2, "", 0), dest2);

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 9: %zu, %s\n", strlcat(dest1, "", 9), dest1);
	printf("ft 9: %u, %s\n\n", ft_strlcat(dest2, "", 9), dest2);

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 10: %zu, %s\n", strlcat(dest1, "", 10), dest1);
	printf("ft 10: %u, %s\n\n", ft_strlcat(dest2, "", 10), dest2);

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 11: %zu, %s\n", strlcat(dest1, "", 11), dest1);
	printf("ft 11: %u, %s\n\n", ft_strlcat(dest2, "", 11), dest2);

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 100: %zu, %s\n", strlcat(dest1, "", 100), dest1);
	printf("ft 100: %u, %s\n\n", ft_strlcat(dest2, "", 100), dest2);

	printf("%s\n\n", "------------------------------------------------------");

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 0: %zu, %s\n", strlcat(dest1, "abcde", 0), dest1);
	printf("ft 0: %u, %s\n\n", ft_strlcat(dest2, "abcde", 0), dest2);

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 9: %zu, %s\n", strlcat(dest1, "abcde", 9), dest1);
	printf("ft 9: %u, %s\n\n", ft_strlcat(dest2, "abcde", 9), dest2);

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 10: %zu, %s\n", strlcat(dest1, "abcde", 10), dest1);
	printf("ft 10: %u, %s\n\n", ft_strlcat(dest2, "abcde", 10), dest2);

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 11: %zu, %s\n", strlcat(dest1, "abcde", 11), dest1);
	printf("ft 11: %u, %s\n\n", ft_strlcat(dest2, "abcde", 11), dest2);

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 100: %zu, %s\n", strlcat(dest1, "abcde", 100), dest1);
	printf("ft 100: %u, %s\n\n", ft_strlcat(dest2, "abcde", 100), dest2);

	printf("%s\n\n", "------------------------------------------------------");

	*dest1 = '\0';
	*dest2 = '\0';
	printf("or 0: %zu, %s\n", strlcat(dest1, "abcde", 0), dest1);
	printf("ft 0: %u, %s\n\n", ft_strlcat(dest2, "abcde", 0), dest2);

	*dest1 = '\0';
	*dest2 = '\0';
	printf("or 1: %zu, %s\n", strlcat(dest1, "abcde", 1), dest1);
	printf("ft 1: %u, %s\n\n", ft_strlcat(dest2, "abcde", 1), dest2);

	*dest1 = '\0';
	*dest2 = '\0';
	printf("or 2: %zu, %s\n", strlcat(dest1, "abcde", 2), dest1);
	printf("ft 2: %u, %s\n\n", ft_strlcat(dest2, "abcde", 2), dest2);

	*dest1 = '\0';
	*dest2 = '\0';
	printf("or 100: %zu, %s\n", strlcat(dest1, "abcde", 100), dest1);
	printf("ft 100: %u, %s\n\n", ft_strlcat(dest2, "abcde", 100), dest2);

	printf("%s\n\n", "------------------------------------------------------");

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 5: %zu, %s\n", strlcat(dest1, "abcdefg", 5), dest1);
	printf("ft 5: %u, %s\n\n", ft_strlcat(dest2, "abcdefg", 5), dest2);

	printf("dest1: %s|\ndest2: %s|\n", dest1, dest2);
	printf("or 25: %zu, %s\n", strlcat(dest1, "abcdefg", 25), dest1);
	printf("ft 25: %u, %s\n\n", ft_strlcat(dest2, "abcdefg", 25), dest2);

	printf("%s\n\n", "------------------------------------------------------");

	*dest1 = '\0';
	*dest2 = '\0';
	printf("or 0: %zu, %s\n", strlcat(dest1, "", 0), dest1);
	printf("ft 0: %u, %s\n\n", ft_strlcat(dest2, "", 0), dest2);

	*dest1 = '\0';
	*dest2 = '\0';
	printf("or 1: %zu, %s\n", strlcat(dest1, "", 1), dest1);
	printf("ft 1: %u, %s\n\n", ft_strlcat(dest2, "", 1), dest2);

	*dest1 = '\0';
	*dest2 = '\0';
	printf("or 2: %zu, %s\n", strlcat(dest1, "", 2), dest1);
	printf("ft 2: %u, %s\n\n", ft_strlcat(dest2, "", 2), dest2);

	*dest1 = '\0';
	*dest2 = '\0';
	printf("or 100: %zu, %s\n", strlcat(dest1, "", 100), dest1);
	printf("ft 100: %u, %s\n\n", ft_strlcat(dest2, "", 100), dest2);

	return (0);
}
