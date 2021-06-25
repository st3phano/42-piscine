#include <unistd.h>

/*
 shifting a negative number to the right replace left digits with 1 instead of 0
 "0x & (something)" is always unsigned
 shifting a negative number to the left is undefined
*/
void	print_hex_code(char c)
{
	char	*hex;
	char	hex_code[3];

	hex = "0123456789abcdef";
	hex_code[0] = '\\';
	hex_code[1] = hex[(c & 0xf0) >> 4];
	hex_code[2] = hex[c & 0x0f];
	write(1, hex_code, 3);
}

char	is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (is_printable(*str))
			write(1, str, 1);
		else
			print_hex_code(*str);
		++str;
	}
}
