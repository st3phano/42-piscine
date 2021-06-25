/*
gcc -Wall -Wextra -Werror -o main main01.c ../$FOLDER/ex01/ft_strncmp.c
*/
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[99] = "";
	char	s2[99] = "";

	printf("ft_strcmp: %d\n", ft_strncmp(s1, s2, 0));
	printf("strcmp: %d\n", strncmp(s1, s2, 0));

	printf("ft_strcmp: %d\n", ft_strncmp(s1, s2, 1));
	printf("strcmp: %d\n", strncmp(s1, s2, 1));

	printf("ft_strcmp: %d\n", ft_strncmp(s1, s2, 100));
	printf("strcmp: %d\n", strncmp(s1, s2, 100));
	return (0);
}
