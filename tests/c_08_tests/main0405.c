/*
gcc -Wall -Wextra -Werror -I . -o main main0405.c ../$FOLDER/ex04/ft_strs_to_tab.c ../$FOLDER/ex05/ft_show_tab.c
*/
#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char	*av1[] = {"123", "3210", "abcde", "fedcba"};

	t_stock_str	*array = ft_strs_to_tab(4, av1);
	array[0].copy[0] = '\t';
	array[1].copy[0] = '\t';
	array[2].copy[0] = '\t';
	array[3].copy[0] = '\t';
	ft_show_tab(array);
	free(array);

	printf("%s\n", "-----------------------------------------------");

	char	*av2[] = {"", "", "", ""};

	array = ft_strs_to_tab(4, av2);
	ft_show_tab(array);
	free(array);

	printf("%s\n", "-----------------------------------------------");

	array = ft_strs_to_tab(4, 0);
	ft_show_tab(array);

	printf("%s\n", "-----------------------------------------------");

	char	*av3[] = {"123", "3210", 0, "fedcba"};

	array = ft_strs_to_tab(4, av3);
	ft_show_tab(array);
	free(array);

	printf("%s\n", "-----------------------------------------------");

	char	*av4[] = {0, 0, 0, 0};

	array = ft_strs_to_tab(4, av4);
	ft_show_tab(array);
	free(array);

	printf("%s\n", "-----------------------------------------------");

	char	*av5[] = {"123", "3210", 0, "fedcba"};

	array = ft_strs_to_tab(-1, av5);
	ft_show_tab(array);
	free(array);

	return (0);
}
