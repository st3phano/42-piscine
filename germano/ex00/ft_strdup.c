#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_len;
	int		i;

	src_len = 0;
	while (*(src + src_len) != '\0')
		src_len++;
	dest = (char *) malloc(sizeof(char) * src_len);
	if (dest == NULL)
		return (0);
	i = 0;
	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
