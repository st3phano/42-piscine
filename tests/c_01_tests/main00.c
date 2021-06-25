/*
norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror -o main main00.c ../$FOLDER/ex00/ft_ft.c
*/
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	number;

	ft_ft(&number);
	printf("%d\n", number);
	return (0);
}
