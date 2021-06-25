/*
 Implement KMP Pattern Matching to improve performance
*/
/*
 The strstr() function finds the first occurrence of the substring TO_FIND
 in the string STR. The terminating null bytes ('\0') are not compared
 Return a pointer to the beginning of the located substring,
 NULL if the substring is not found or
 STR if TO_FIND begin with null
*/
char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (str[i] == to_find[i] && to_find[i] != '\0')
			++i;
		if (to_find[i] == '\0')
			return (str);
		else
			++str;
	}
	return (0);
}
