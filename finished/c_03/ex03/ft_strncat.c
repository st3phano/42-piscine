/*
 The strncat() function appends NB bytes from SRC to DEST,
 overwriting the terminating null byte at the end of DEST
 If SRC contains NB or more bytes, strncat() writes NB+1 bytes to DEST,
 NB from SRC plus the terminating null byte
 Return a pointer to the resulting string DEST
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_end;
	unsigned int	src_i;

	dest_end = 0;
	while (dest[dest_end] != '\0')
		++dest_end;
	src_i = 0;
	while (src_i < nb && src[src_i] != '\0')
	{
		dest[dest_end + src_i] = src[src_i];
		++src_i;
	}
	dest[dest_end + src_i] = '\0';
	return (dest);
}
