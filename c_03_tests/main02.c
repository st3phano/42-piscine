/*
gcc -Wall -Wextra -Werror -o main main02.c ../$FOLDER/ex02/ft_strcat.c
*/
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	s1[99] = "";
	char	s2[99] = "";
	char	s3[99] = "";
	char	s4[99] = "";

	printf("ft_strcat: %s|\n", ft_strcat(s1, s2));
	printf("strcat: %s|\n", strcat(s3, s4));

	return (0);
}
