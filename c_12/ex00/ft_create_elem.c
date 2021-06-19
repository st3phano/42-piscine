#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(*new_elem));
	if (new_elem != 0)
	{
		new_elem->data = data;
		new_elem->next = 0;
	}
	return (new_elem);
}
