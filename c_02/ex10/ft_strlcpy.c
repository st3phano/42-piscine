/*
 The strlcpy() function copies UP TO (SIZE - 1) characters from SRC to DEST,
 NULL-terminating the result (as long as SIZE is larger than 0),
 returning the length of SRC
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		++i;
	return (i);
}
