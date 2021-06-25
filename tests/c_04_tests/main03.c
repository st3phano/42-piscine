/*
gcc -Wall -Wextra -Werror -o main main03.c ../$FOLDER/ex03/ft_atoi.c
*/
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("ft: %d\n", ft_atoi("\t\n\v\f\r -2147483648??1234"));
	printf("or: %d\n", atoi("\t\n\v\f\r -2147483648??1234"));

	printf("ft: %d\n", ft_atoi("\t\n\v\f\r -0??1234"));
	printf("or: %d\n", atoi("\t\n\v\f\r -0??1234"));

	printf("ft: %d\n", ft_atoi("\t\n\v\f\r +2147483647??1234"));
	printf("or: %d\n", atoi("\t\n\v\f\r +2147483647??1234"));

	printf("ft: %d\n", ft_atoi("\t\n\v\f\r +0??1234"));
	printf("or: %d\n", atoi("\t\n\v\f\r +0??1234"));

	printf("ft: %d\n", ft_atoi("\t\n\v\f\r +??1234"));
	printf("or: %d\n", atoi("\t\n\v\f\r -??1234"));

	return (0);
}
