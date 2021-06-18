#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}

int	strs_sep_len(char **strs, int strs_size, char *sep)
{
	int	sep_size;
	int	len;
	int	i;

	sep_size = ft_strlen(sep);
	len = 0;
	i = 0;
	while (i < strs_size)
	{
		len += ft_strlen(strs[i]);
		if (i < strs_size - 1)
			len += sep_size;
		++i;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined_strs;
	char	*joined_strs_last_pos;
	int		joined_strs_size;
	int		i;

	joined_strs_size = strs_sep_len(strs, size, sep) + 1;
	joined_strs = malloc(joined_strs_size * sizeof(*joined_strs));
	if (joined_strs == 0)
		return (0);
	joined_strs_last_pos = joined_strs;
	i = 0;
	while (i < size)
	{
		joined_strs_last_pos = ft_strcpy(joined_strs_last_pos, strs[i]);
		if (i < size - 1)
			joined_strs_last_pos = ft_strcpy(joined_strs_last_pos, sep);
		++i;
	}
	*joined_strs_last_pos = '\0';
	return (joined_strs);
}
