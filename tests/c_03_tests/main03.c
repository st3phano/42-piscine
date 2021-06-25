/*
gcc -Wall -Wextra -Werror -o main main03.c ../$FOLDER/ex03/ft_strncat.c
*/
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	s1[99] = "1";
	char	s2[99] = "";
	char	s3[99] = "1";
	char	s4[99] = "";

	printf("ft_strcat:\t%s|\n", ft_strncat(s1, s2 , 10));
	printf("strcat:\t\t%s|\n", strncat(s3, s4, 10));
	printf("ft_strcat:\t%s|\n", ft_strncat(s1, s2 , 1));
	printf("strcat:\t\t%s|\n", strncat(s3, s4, 1));
	printf("ft_strcat:\t%s|\n", ft_strncat(s1, s2 , 0));
	printf("strcat:\t\t%s|\n", strncat(s3, s4, 0));

	return (0);
}
