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
	char	*array0[] = {"2h", "mj", "WcH5vpdy2bh","VPBO8", "a", "H3U1NIBWFrJO", "BTOM8rSQ1", "s", "S", "sEU2MWS", "hQT", "lSHuFJf4m", "SGZmH", "t6mDiRLX0oe", "0iP3wU", "0c8LnJ6y", 0};

	ft_advanced_sort_string_tab(array0, &ft_strcmp);

	int	i = 0;
	while (array0[i] != 0)
	{
		printf("%s\n", array0[i]);
		++i;
	}

	putchar('\n');

	char	*array1[] = {"AOKJwPG", "IZkypJQFVv", "W6sTNeyS", "AKXD6Y7", "502Vk9yiYn", "NzvESf7kB1dj", "dWsbyucgq0", "ui8kCAl9a", "T", "he2pyLETkKRf", "eIGvpgR3Sml", "lkhRSBZ", "mq9rOhPBVN", "GP", "F7t2", "Hw", 0};

	ft_advanced_sort_string_tab(array1, &ft_strcmp);

	i = 0;
	while (array1[i] != 0)
	{
		printf("%s\n", array1[i]);
		++i;
	}

	putchar('\n');

	char	*array2[] = {"9", "8", "7", "6", "5", "4", "3", "2", 0};

	ft_advanced_sort_string_tab(array2, &ft_strcmp);

	i = 0;
	while (array2[i] != 0)
	{
		printf("%s\n", array2[i]);
		++i;
	}

	return (0);
}
