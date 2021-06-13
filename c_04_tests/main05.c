/*
gcc -Wall -Wextra -Werror -o main main05.c ../$FOLDER/ex05/ft_atoi_base.c
*/
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%s\n\n", "BASE 10");
	char *base10 = "0123456789";	

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+2147483648??1234", base10));
	printf("or: %ld\n", strtol("\t\n\v\f\r -2147483648??1234", 0, 10));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+0??1234", base10));
	printf("or: %ld\n", strtol("\t\n\v\f\r -0??1234", 0, 10));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r +2147483647??1234", base10));
	printf("or: %ld\n", strtol("\t\n\v\f\r +2147483647??1234", 0, 10));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r +0??1234", base10));
	printf("or: %ld\n", strtol("\t\n\v\f\r +0??1234", 0, 10));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+??1234", base10));
	printf("or: %ld\n", strtol("\t\n\v\f\r -??1234", 0, 10));

	printf("\n%s\n\n", "BASE 16");
	char *base16 = "0123456789ABCDEF";

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+80000000??1234", base16));
	printf("or: %ld\n", strtol("\t\n\v\f\r -80000000??1234", 0, 16));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+0??1234", base16));
	printf("or: %ld\n", strtol("\t\n\v\f\r -0??1234", 0, 16));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r +7FFFFFFF??1234", base16));
	printf("or: %ld\n", strtol("\t\n\v\f\r +7FFFFFFF??1234", 0, 16));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r +0??1234", base16));
	printf("or: %ld\n", strtol("\t\n\v\f\r +0??1234", 0, 16));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+??1234", base16));
	printf("or: %ld\n", strtol("\t\n\v\f\r -??1234", 0, 16));
	
	printf("\n%s\n\n", "BASE 8");
	char *base8 = "01234567";

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+20000000000??1234", base8));
	printf("or: %ld\n", strtol("\t\n\v\f\r -20000000000??1234", 0, 8));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+0??1234", base8));
	printf("or: %ld\n", strtol("\t\n\v\f\r -0??1234", 0, 8));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r +17777777777??1234", base8));
	printf("or: %ld\n", strtol("\t\n\v\f\r +17777777777??1234", 0, 8));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r +0??1234", base8));
	printf("or: %ld\n", strtol("\t\n\v\f\r +0??1234", 0, 8));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+??1234", base8));
	printf("or: %ld\n", strtol("\t\n\v\f\r -??1234", 0, 8));

	printf("\n%s\n\n", "BASE 2");
	char *base2 = "01";

	printf("ft: %d\n",
	ft_atoi_base("\t\n\v\f\r ---+10000000000000000000000000000000??01", base2));
	printf("or: %ld\n",
	strtol("\t\n\v\f\r -10000000000000000000000000000000??01", 0, 2));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+0??01", base2));
	printf("or: %ld\n", strtol("\t\n\v\f\r -0??01", 0, 2));

	printf("ft: %d\n",
	ft_atoi_base("\t\n\v\f\r +01111111111111111111111111111111??01", base2));
	printf("or: %ld\n",
	strtol("\t\n\v\f\r +01111111111111111111111111111111??01", 0, 2));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r +0??01", base2));
	printf("or: %ld\n", strtol("\t\n\v\f\r +0??01", 0, 2));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+??01", base2));
	printf("or: %ld\n", strtol("\t\n\v\f\r -??01", 0, 2));

	printf("\n%s\n\n", "BASE 1");
	char *base1 = "0";

	printf("ft: %d\n",
	ft_atoi_base("\t\n\v\f\r ---+10000000000000000000000000000000??01", base1));
	printf("or: %ld\n",
	strtol("\t\n\v\f\r -10000000000000000000000000000000??01", 0, 1));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+0??01", base1));
	printf("or: %ld\n", strtol("\t\n\v\f\r -0??01", 0, 1));

	printf("ft: %d\n",
	ft_atoi_base("\t\n\v\f\r +01111111111111111111111111111111??01", base1));
	printf("or: %ld\n",
	strtol("\t\n\v\f\r +01111111111111111111111111111111??01", 0, 1));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r +0??01", base1));
	printf("or: %ld\n", strtol("\t\n\v\f\r +0??01", 0, 1));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+??01", base1));
	printf("or: %ld\n", strtol("\t\n\v\f\r -??01", 0, 1));

	printf("\n%s\n\n", "BASE FAIL");
	char *base_fail = "0123456789 5";

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+2147483648??1", base_fail));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+0??01", base_fail));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r +2147483647??1", base_fail));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r +0??01", base_fail));

	printf("ft: %d\n", ft_atoi_base("\t\n\v\f\r ---+??01", base_fail));

	return (0);
}
