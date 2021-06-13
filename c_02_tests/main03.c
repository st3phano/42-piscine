/*
gcc -Wall -Wextra -Werror -o main main03.c ../$FOLDER/ex03/ft_str_is_numeric.c
*/
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("0 : %d\n", ft_str_is_numeric("5 "));
	printf("0 : %d\n", ft_str_is_numeric("5a"));
	printf("1 : %d\n", ft_str_is_numeric("123456789"));
	printf("1 : %d\n", ft_str_is_numeric("987654321"));
	printf("1 : %d\n", ft_str_is_numeric(""));
	return (0);
}
