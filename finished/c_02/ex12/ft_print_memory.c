#include <unistd.h>

void	print_address(size_t addr)
{
	char	*hex;
	int		i;
	char	address[15];

	hex = "0123456789abcdef";
	i = 14;
	while (i > -1)
	{
		address[i] = hex[addr % 16];
		addr /= 16;
		--i;
	}
	write(1, address, 15);
	write(1, ": ", 2);
}

/*
 shifting a negative number to the right replace left digits with 1 instead of 0
 "0x & (something)" is always unsigned
 shifting a negative number to the left is undefined
*/
void	print_hex_line(char *line, unsigned int size)
{
	char			*hex;
	unsigned int	i;

	hex = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		write(1, hex + ((line[i] & 0xf0) >> 4), 1);
		write(1, hex + (line[i] & 0x0f), 1);
		if (i % 2)
			write(1, " ", 1);
		++i;
	}
	while (i < 16)
	{
		write(1, " ", 1);
		++i;
	}
}

void	print_ascii_line(char *line, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (line[i] >= ' ' && line[i] <= '~')
			write(1, line + i, 1);
		else
			write(1, ".", 1);
		++i;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	line_size;

	i = 0;
	while (i < size)
	{
		if (i + 16 < size)
			line_size = 16;
		else
			line_size = size - i;
		print_address((size_t)addr + i);
		print_hex_line(addr + i, line_size);
		print_ascii_line(addr + i, line_size);
		i += line_size;
	}
	return (addr);
}
