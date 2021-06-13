/*
 The strcmp() function compares the two strings s1 and s2
 It returns an integer less than zero when (s1 < s2),
 equal to zero when (s1 == s2),
 or greater than zero when (s1 > s2)
*/
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		++i;
	return (s1[i] - s2[i]);
}
