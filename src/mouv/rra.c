#include "../../push_swap.h"

void	rra(t_satck *a)
{
	t_node *last;

	if (a->size < 2)
		return ;
	last = dlst_remove_back(a);
	dlst_add_front(a, last);
}
