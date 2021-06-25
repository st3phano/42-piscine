/*
gcc -Wall -Wextra -Werror -o main main02.c -I ../$FOLDER/ex02/
*/
#include "ft_abs.h"
#include <stdio.h>

int	main(void)
{
	for (int i = -2; i < 3; ++i)
		printf("%d\n", ABS(i));
	return (0);
}
