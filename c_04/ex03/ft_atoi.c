/*
 The  string may begin with an arbitrary amount of white space
 (as determined by isspace(3)) followed by a single optional '+' or '-' sign
 The remainder of the string is converted to an int value,
 stopping at the first character which is not a valid digit
 If there were no valid digits at all, the function returns 0
*/
char	is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_atoi(char *str)
{
	char	sign;
	int		integer;	

	while (is_space(*str))
		++str;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	integer = 0;
	while (*str >= '0' && *str <= '9')
	{
		integer = (integer * 10) + (*str - '0');
		++str;
	}
	return (integer * sign);
}
