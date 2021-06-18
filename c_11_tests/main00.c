/*
norminette
gcc -Wall -Wextra -Werror -o main main00.c ../$FOLDER/ex00/ft_foreach.c
*/
#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	print_nbr(int nbr)
{
	printf("%d\n", nbr);
}

int	main(void)
{
	int array[] = {-100, 0, 20, 42, 100};

	ft_foreach(array, 0, &print_nbr);
	ft_foreach(array, 5, &print_nbr);
	ft_foreach(array, -1, &print_nbr);

	return (0);
}
