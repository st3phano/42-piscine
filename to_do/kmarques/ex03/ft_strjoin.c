#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 != '\0')
	{
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
		i++;
	}
	*s1 = '\0';
	return (s1 - i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		total_size;
	int		i;

	total_size = 1;
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(*(strs + i));
		i++;
	}
	total_size += ft_strlen(sep) * (size - 1);
	new_str = malloc (total_size);
	if (new_str == 0)
		return (0);
	*new_str = '\0';
	i = 0;
	while (i < size)
	{
		new_str = ft_strcat(new_str, *(strs + i));
		if (i < (size - 1))
			new_str = ft_strcat(new_str, sep);
		i++;
	}
	return (new_str);
}
