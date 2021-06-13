/*
https://www.cplusplus.com/reference/cctype/iscntrl/
gcc -Wall -Wextra -Werror -o main main11.c ../$FOLDER/ex11/ft_putstr_non_printable.c
*/
#include <stdio.h>
#include <limits.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char negative[129];
	char positive[128];

	printf("CHAR_MIN: %d\n", CHAR_MIN);
	for (int i = 0, j = CHAR_MIN; i < 128; ++i, ++j)
		negative[i] = j;
	negative[128] = '\0';
	ft_putstr_non_printable(negative);
	putchar('\n');

	printf("CHAR_MAX: %d\n", CHAR_MAX);
	for (int i = 0; i < 127; ++i)
		positive[i] = i + 1;
	negative[127] = '\0';
	ft_putstr_non_printable(positive);
	putchar('\n');
	return (0);
}
