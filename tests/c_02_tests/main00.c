/*
norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror -o main main00.c ../$FOLDER/ex00/ft_strcpy.c
*/
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[] = "123456789 123456789";
	char overrun[] = "---------";
	char dest[] = "---------";

	// compare with strcpy()
	printf("return\t=\t%s\n", strcpy(dest, src));
	printf("dest\t=\t%s\n", dest);
	printf("overrun\t=\t%s\n", overrun);
	return (0);
}
