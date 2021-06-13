/*
 strlcat() appends the NULL-terminated string SRC to the end of DST
 It will append at most (SIZE - strlen(DST) - 1 bytes),
 NULL-terminating the result
 
 If strlcat() traverses SIZE characters without finding a NULL,
 the length of the string is considered to be SIZE
 and the DEST string will not be NUL-terminated
 (since there was no space for the NULL)
 
 Returns the initial length of DST plus the length of SRC
*/

unsigned int	get_str_len(char *str)
{
	unsigned int	str_len;

	str_len = 0;
	while (str[str_len] != '\0')
		++str_len;
	return (str_len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_i;

	dest_len = get_str_len(dest);
	src_i = 0;
	while (dest_len + src_i + 1 < size && src[src_i] != '\0')
	{
		dest[dest_len + src_i] = src[src_i];
		++src_i;
	}
	dest[dest_len + src_i] = '\0';
	while (src[src_i] != '\0')
		++src_i;
	if (dest_len < size)
		return (dest_len + src_i);
	else
		return (size + src_i);
}
