#include "../../push_swap.h"

void	ra(tsatck *a)
{
	t_node *first;

	if (a->size < 2)
		return ;
	first = dlst_remove_front(a);
	dlst_add_back(a, first);
}
