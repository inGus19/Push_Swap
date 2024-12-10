#include "../../push_swap.h"

void	pb(t_satck *a, t_stack *b)
{
	t_node *node;

	if (a->size == 0)
		return ;
	node = dlst_remove_front(a);
	dlst_ad_front(b, node);
}
