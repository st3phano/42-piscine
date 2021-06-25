/*
		!!! NBR, BASE_FROM, BASE_TO não serão necessariamente editáveis !!!
									NBR
 O número representado por NBR cabe em um int
 Pode começar por um número arbitrário de ’white space’ [man 3 isspace]
 Pode então ser seguido por um número arbitrário de sinais '+' e sinais '-',
 O sinal '-' vai mudar o sinal do inteiro retornado em função
 do número de sinais '-' e se este for par ou ímpar
 Não deve considerar os overflows e os underflows
 O número retornado deve ser prefixado por apenas um '-' se for necessário
									BASE
 Se uma base estiver incorreta, a função irá retornar NULL
 Um erro pode ser:
	a base é vazia ou de tamanho 1;
	a base contém duas vezes o mesmo caractere;
*/
int		get_base_len(char *base);
int		get_index(char c, char *str);
int		atoi_base(char *nbr, char *base, int base_len);
int		get_nbr_len_base(int nbr, int base_len);
char	*itoa_base(int nbr, char *base, int base_len);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_from_len;
	int		base_to_len;
	int		nbr_int;
	char	*nbr_converted;

	base_from_len = get_base_len(base_from);
	base_to_len = get_base_len(base_to);
	if (base_from_len < 2 || base_to_len < 2)
		return (0);
	nbr_int = atoi_base(nbr, base_from, base_from_len);
	nbr_converted = itoa_base(nbr_int, base_to, base_to_len);
	return (nbr_converted);
}
