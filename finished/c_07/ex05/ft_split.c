#include <stdlib.h>

char	is_sep(char c, char *sep)
{
	while (*sep != '\0')
	{
		if (c == *sep)
			return (1);
		++sep;
	}
	return (0);
}

int	get_str_count(char *str, char *sep)
{
	int	str_count;

	str_count = 0;
	while (*str != '\0')
	{
		if (!is_sep(*str, sep))
			if (is_sep(*(str + 1), sep) || *(str + 1) == '\0')
				++str_count;
		++str;
	}
	return (str_count);
}

char	*malloc_strcpy(char *src, int *i_src, char *sep)
{
	int		len;
	char	*dest;
	int		i_dest;

	while (is_sep(src[*i_src], sep))
		++*i_src;
	len = 0;
	while (!is_sep(src[*i_src + len], sep) && src[*i_src + len] != '\0')
		++len;
	dest = malloc((len + 1) * sizeof(*dest));
	if (dest == 0)
		return (0);
	i_dest = 0;
	while (i_dest < len)
	{
		dest[i_dest] = src[*i_src + i_dest];
		++i_dest;
	}
	dest[i_dest] = '\0';
	*i_src += i_dest;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		split_size;
	int		i_str;
	int		i_split;

	split_size = get_str_count(str, charset);
	split = malloc((split_size + 1) * sizeof(*split));
	if (split == 0)
		return (0);
	i_str = 0;
	i_split = 0;
	while (i_split < split_size)
	{
		split[i_split] = malloc_strcpy(str, &i_str, charset);
		++i_split;
	}
	split[i_split] = 0;
	return (split);
}
