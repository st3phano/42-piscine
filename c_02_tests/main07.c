/*
gcc -Wall -Wextra -Werror -o main main07.c ../$FOLDER/ex07/ft_strupcase.c
*/
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char printable[96];

	for (int i = 0, j = ' '; i < 95; ++i, ++j)
		printable[i] = j;
	printable[95] = '\0';

	printf("%s\n\n", printable);
	printf("%s\n\n", ft_strupcase(printable));
	printf("%s\n", printable);
	return (0);
}
