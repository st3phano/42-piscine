/*
 The strcat() function appends the SRC string to the DEST string,
 overwriting the terminating null byte at the end of DEST
 and then adds a terminating null byte
 Return a pointer to the resulting string DEST
*/
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_end;
	unsigned int	i;

	dest_end = 0;
	while (dest[dest_end] != '\0')
		++dest_end;
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_end + i] = src[i];
		++i;
	}
	dest[dest_end + i] = '\0';
	return (dest);
}
