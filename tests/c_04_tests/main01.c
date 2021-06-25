/*
gcc -Wall -Wextra -Werror -o main main01.c ../$FOLDER/ex01/ft_putstr.c
*/
#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	ft_putstr("Parabéns!!\nSeu exercício está certo!!\n");
	return (0);
}
