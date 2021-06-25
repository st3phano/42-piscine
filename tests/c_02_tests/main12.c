/*
gcc -Wall -Wextra -Werror -o main main12.c ../$FOLDER/ex12/ft_print_memory.c
*/
#include <stdio.h>
#include <string.h>
#include <limits.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char *str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";
	char negative[129];
	char positive[128];

	printf("%p\n", str);
	ft_print_memory(str, 92);
	putchar('\n');

	printf("%s\n", "NEGATIVE:");
	printf("%p\n", negative);
	for (int i = 0, j = CHAR_MIN; i < 128; ++i, ++j)
		negative[i] = j;
	negative[128] = '\0';
	ft_print_memory(negative, strlen(negative));
	putchar('\n');

	printf("%s\n", "POSITIVE:");
	printf("%p\n", positive);
	for (int i = 0; i < 127; ++i)
		positive[i] = i + 1;
	negative[127] = '\0';
	ft_print_memory(positive, strlen(positive));

	ft_print_memory(0, 100);
	ft_print_memory(str, 0);
	
	return (0);
}
