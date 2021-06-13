/*
gcc -Wall -Wextra -Werror -o main main09.c ../$FOLDER/ex09/ft_strcapitalize.c
*/
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "oI,\ttUDO\nbEM? 42PALAVRAS QUARENTA-e-DUAS; cINQUENTA+E+uM";

	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	printf("%s\n", str);
	return (0);
}
