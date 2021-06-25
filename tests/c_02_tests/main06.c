/*
https://www.cplusplus.com/reference/cctype/isprint/
gcc -Wall -Wextra -Werror -o main main06.c ../$FOLDER/ex06/ft_str_is_printable.c
*/
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char string[] = {'a', 31, 0};

	char non_printable[33];
	char printable[96];
	char ascii[128];

	non_printable[0] = 127;
	for (int i = 1; i < 32; ++i)
		non_printable[i] = i;
	non_printable[32] = '\0';

	for (int i = 0, j = ' '; i < 95; ++i, ++j)
		printable[i] = j;
	printable[95] = '\0';

	ascii[0] = 127;
	for (int i = 1; i < 127; ++i)
		ascii[i] = i;
	ascii[127] = '\0';

	printf("0 : %d\n", ft_str_is_printable(non_printable));
	printf("0 : %d\n", ft_str_is_printable(ascii));
	printf("0 : %d\n", ft_str_is_printable(string));
	printf("1 : %d\n", ft_str_is_printable(printable));
	printf("1 : %d\n", ft_str_is_printable(""));
	return (0);
}
