/*
gcc -Wall -Wextra -Werror -o main main07.c ../$FOLDER/ex07/ft_advanced_sort_string_tab.c
*/
#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		++i;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	*array[] = {"1234", "melancia", "MELANCIA", "laranja", "", 0};

	ft_advanced_sort_string_tab(array, &ft_strcmp);

	int	i = 0;
	while (array[i] != 0)
	{
		printf("%s\n", array[i]);
		++i;
	}

	return (0);
}
