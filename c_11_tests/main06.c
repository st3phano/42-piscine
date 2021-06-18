/*
gcc -Wall -Wextra -Werror -o main main06.c ../$FOLDER/ex06/ft_sort_string_tab.c
*/
#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(void)
{
	char	*array[] = {"", "melancia", "", "laranja", 0};

	ft_sort_string_tab(array);

	int	i = 0;
	while (array[i] != 0)
	{
		printf("%s\n", array[i]);
		++i;
	}

	return (0);
}
