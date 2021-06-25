/*
gcc -Wall -Wextra -Werror -o main main04.c ../$FOLDER/ex04/ft_str_is_lowercase.c
*/
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("0 : %d\n", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz@"));
	printf("0 : %d\n", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz["));
	printf("0 : %d\n", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz`"));
	printf("0 : %d\n", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz{"));
	printf("0 : %d\n", ft_str_is_lowercase("Aabcdefghijklmnopqrstuvwxyz"));
	printf("0 : %d\n", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyzZ"));
	printf("1 : %d\n", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"));
	printf("1 : %d\n", ft_str_is_lowercase(""));
	return (0);
}
