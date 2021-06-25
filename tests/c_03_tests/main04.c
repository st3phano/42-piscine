/*
gcc -Wall -Wextra -Werror -o main main04.c ../$FOLDER/ex04/ft_strstr.c
*/
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{

	printf("ft_strstr:\t%s\n", ft_strstr("a", ""));
	printf("strstr:\t\t%s\n", strstr("a", ""));

	printf("ft_strstr:\t%s\n", ft_strstr("", "a"));
	printf("strstr:\t\t%s\n", strstr("", "a"));

	printf("ft_strstr:\t%s|\n", ft_strstr("", ""));
	printf("strstr:\t\t%s|\n", strstr("", ""));

	printf("ft_strstr:\t%s\n", ft_strstr("aab", "abZ"));
	printf("strstr:\t\t%s\n", strstr("aab", "abZ"));

	printf("ft_strstr:\t%s\n", ft_strstr("aab", "ab"));
	printf("strstr:\t\t%s\n", strstr("aab", "ab"));

	printf("ft_strstr:\t%s\n", ft_strstr("aab", "aab"));
	printf("strstr:\t\t%s\n", strstr("aab", "aab"));

	printf("ft_strstr:\t%s\n", ft_strstr("aab", "aaab"));
	printf("strstr:\t\t%s\n", strstr("aab", "aaab"));

	return (0);
}
