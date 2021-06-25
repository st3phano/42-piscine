/*
gcc -Wall -Wextra -Werror -o main main06.c ../$FOLDER/ex06/ft_sort_string_tab.c
*/
#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(void)
{
	char	*array[] = {"AOKJwPG", "IZkypJQFVv", "W6sTNeyS", "AKXD6Y7", "502Vk9yiYn", "NzvESf7kB1dj", "dWsbyucgq0", "ui8kCAl9a", "T", "he2pyLETkKRf", "eIGvpgR3Sml", "lkhRSBZ", "mq9rOhPBVN", "GP", "F7t2", "Hw", 0};

	ft_sort_string_tab(array);

	int	i = 0;
	while (array[i] != 0)
	{
		printf("%s\n", array[i]);
		++i;
	}

	putchar('\n');

	char	*array1[] = {"2h", "mj", "WcH5vpdy2bh","VPBO8", "a", "H3U1NIBWFrJO", "BTOM8rSQ1", "s", "S", "sEU2MWS", "hQT", "lSHuFJf4m", "SGZmH", "t6mDiRLX0oe", "0iP3wU", "0c8LnJ6y", 0};

	ft_sort_string_tab(array1);

	i = 0;
	while (array1[i] != 0)
	{
		printf("%s\n", array1[i]);
		++i;
	}

	return (0);
}
