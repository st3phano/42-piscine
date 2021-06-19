#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_elen;

	new_elem = ft_create_elem(data);
	if (new_elem != 0)
	{
		new_elem->next = *begin_list;
		*begin_list = new_elem;
	}
}
