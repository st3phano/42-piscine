/*
gcc -Wall -Wextra -Werror -o main main05.c ../$FOLDER/ex05/ft_str_is_uppercase.c
*/
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("0 : %d\n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ@"));
	printf("0 : %d\n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ["));
	printf("0 : %d\n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ`"));
	printf("0 : %d\n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ{"));
	printf("0 : %d\n", ft_str_is_uppercase("aABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("0 : %d\n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZz"));
	printf("1 : %d\n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
	printf("1 : %d\n", ft_str_is_uppercase(""));
	return (0);
}
