/*
gcc -Wall -Wextra -Werror -o main main08.c ../$FOLDER/ex08/ft_strlowcase.c
*/
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char printable[96];

	for (int i = 0, j = ' '; i < 95; ++i, ++j)
		printable[i] = j;
	printable[95] = '\0';

	printf("%s\n\n", printable);
	printf("%s\n\n", ft_strlowcase(printable));
	printf("%s\n", printable);
	return (0);
}
