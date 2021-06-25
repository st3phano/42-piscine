/*
 the line:
 	while (i < last_i - i)
 can be replaced by:
 	while (i <= last_i / 2)
 but will perform an exchange of the middle element with itself in odd arrays
 	while (i < last_i / 2)
 cannot be used because it won't work on even arrays
 	while (i < size / 2)
 also works
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	last_i;
	int	aux;

	i = 0;
	last_i = size - 1;
	while (i < last_i - i)
	{
		aux = tab[i];
		tab[i] = tab[last_i - i];
		tab[last_i - i] = aux;
		++i;
	}
}
