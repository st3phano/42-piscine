/*
gcc -Wall -Wextra -Werror -o main main02.c ../$FOLDER/ex02/ft_str_is_alpha.c
*/
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("0 : %d\n", ft_str_is_alpha("@"));
	printf("0 : %d\n", ft_str_is_alpha("["));
	printf("0 : %d\n", ft_str_is_alpha("`"));
	printf("0 : %d\n", ft_str_is_alpha("{"));
	printf("1 : %d\n", ft_str_is_alpha("A"));
	printf("1 : %d\n", ft_str_is_alpha("Z"));
	printf("1 : %d\n", ft_str_is_alpha("a"));
	printf("1 : %d\n", ft_str_is_alpha("z"));
	printf("1 : %d\n", ft_str_is_alpha(""));
	return (0);
}
