/*
gcc -Wall -Wextra -Werror -o main main02.c ../$FOLDER/ex02/ft_any.c
*/
#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*));

int	is_a(char *str)
{
	if (*str == 'a')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char *strs[] = {"b", "b", "b", "a", 0};

	printf("%d\n", ft_any(strs, &is_a));

	return (0);
}
