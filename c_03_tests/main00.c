/*
norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror -o main main00.c ../$FOLDER/ex00/ft_strcmp.c
*/
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[99] = {1, 10, 0};
	char	s2[99] = {20, -10, 0};

	printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
	printf("strcmp: %d\n", strcmp(s1, s2));
	return (0);
}
