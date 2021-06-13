#include <unistd.h>

/*
void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	write(1, str, len);
}
*/
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		++str;
	}
}
