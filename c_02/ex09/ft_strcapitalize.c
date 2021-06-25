/*
 Word is a sequence of alphanumeric characters
*/
char	*ft_strcapitalize(char *str)
{
	char			previous_is_alphanumeric;
	unsigned int	i;

	previous_is_alphanumeric = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!previous_is_alphanumeric)
				str[i] -= 32;
			previous_is_alphanumeric = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (previous_is_alphanumeric)
				str[i] += 32;
			previous_is_alphanumeric = 1;
		}
		else
			previous_is_alphanumeric = str[i] >= '0' && str[i] <= '9';
		++i;
	}
	return (str);
}
