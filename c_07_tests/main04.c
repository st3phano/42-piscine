/*
gcc -Wall -Wextra -Werror -o main main04.c ../$FOLDER/ex04/ft_convert_base.c ../$FOLDER/ex04/ft_convert_base2.c
*/
#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char *nbr_converted;

	printf("%s\n", "DEC TO HEX:");

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0",
										"0123456789",
											"0123456789abcdef");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--2147483648",
										"0123456789",
											"0123456789abcdef");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-2147483647",
										"0123456789",
											"0123456789abcdef");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	printf("%s\n", "\nDEC TO DEC:");

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0",
										"0123456789",
											"0123456789");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--2147483648",
										"0123456789",
											"0123456789");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-2147483647",
										"0123456789",
											"0123456789");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	printf("%s\n", "\nDEC TO OCT:");

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0",
										"0123456789",
											"01234567");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--2147483648",
										"0123456789",
											"01234567");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-2147483647",
										"0123456789",
											"01234567");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	printf("%s\n", "\nHEX TO DEC:");

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0",
										"0123456789abcdef",
											"0123456789");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--80000000",
										"0123456789abcdef",
											"0123456789");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-7fffffff",
										"0123456789abcdef",
											"0123456789");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	printf("%s\n", "\nINVALID BASE:");

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0",
										"0123456789abcdeff",
											"0123456789");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--0",
										"0123456789abcdef",
											"01234567899");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--80000000",
										"0123456789abcdef",
											"9");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-7fffffff",
										"f",
											"0123456789");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--80000000",
										"0123456789abcdef",
											"0123456789+");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-7fffffff",
										"0123456789abcdef-",
											"0123456789");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+--80000000",
										"0123456789abcdef",
											"0123456789 ");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-7fffffff",
										"0123456789abcdef\t",
											"0123456789\n");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	printf("%s\n", "\nNO VALUE:");

	nbr_converted = ft_convert_base("\t\n\v\f\r +-+-+-",
										"0123456789abcdef",
											"01");
	printf("%s\n", nbr_converted);
	free(nbr_converted);

	nbr_converted = ft_convert_base("\t\n\v\f\r QQQQQQ",
										"0123456789abcdef",
											"01");
	printf("%s\n", nbr_converted);
	free(nbr_converted);
	
	return (0);
}
