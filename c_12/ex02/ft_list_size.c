int	ft_list_size(t_list *begin_list)
{
	int	list_size;

	list_size = 0;
	while (begin_list != 0)
	{
		++list_size;
		begin_list = begin_list->next;
	}
	return (list_size);
}
