/*
 The strncmp() function compares AT MOST n bytes of s1 and s2
 It returns an integer less than zero when (s1 < s2),
 equal to zero when (s1 == s2),
 or greater than zero when (s1 > s2)
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}
