/*
 Retorna 1 se pelo menos um elemento da matriz
 retornar algo diferente de 0 ao ser passado para a função f,
 caso contrário, ela deve retornar 0
 A matriz terminará com um ponteiro nulo
*/
int	ft_any(char **tab, int(*f)(char*))
{
	while (*tab != 0)
	{
		if ((*f)(*tab) != 0)
			return (1);
		++tab;
	}
	return (0);
}
