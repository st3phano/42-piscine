#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dup;

	src_len = ft_strlen(src);
	dup = malloc((src_len + 1) * sizeof(*dup));
	if (dup == 0)
		return (0);
	ft_strcpy(dup, src);
	return (dup);
}
