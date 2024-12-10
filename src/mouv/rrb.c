#include "../../push_swap.h"

void	rrb(t_satck *b)
{
	t_node *last;

	if (b->size < 2)
		return ;
	last = dlst_remove_back(b);
	dlst_add_front(a, last);
}
