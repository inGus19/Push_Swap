#include "../../push_swap.h"

void	pa(t_satck *a, t_satck *b)
{
	t_node *node;

	if (b->size == 0)
		return ;
	node = dlst_remove_front(b);
	dlst_add_front(a, node);
}
