/*
gcc -Wall -Wextra -Werror -o main main03.c ../$FOLDER/ex03/ft_count_if.c
*/
#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*));

int	is_a(char *str)
{
	if (*str == 'a')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char *strs[] = {"b", "b", "b", "a", "b"};

	printf("%d\n", ft_count_if(strs, 5, &is_a));

	return (0);
}
