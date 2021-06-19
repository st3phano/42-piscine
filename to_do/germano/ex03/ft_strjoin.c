#include <stdlib.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_len;

	d_len = 0;
	while (dest[d_len] != '\0')
		d_len++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[d_len] = src[i];
		d_len++;
		i++;
	}
	dest[d_len] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		nb_of_chars;

	if (size == 0)
	{
		ret = (char *) malloc(0);
		return (ret);
	}
	nb_of_chars = (size - 1) * ft_strlen(sep);
	i = -1;
	while (++i < size)
		nb_of_chars += ft_strlen(strs[i]);
	ret = malloc(sizeof(char) * (nb_of_chars + 1));
	i = 0;
	while (i < size - 1)
	{
		ft_strcat(ret, strs[i]);
		ft_strcat(ret, sep);
		i++;
	}
	ft_strcat(ret, strs[i]);
	return (ret);
}
