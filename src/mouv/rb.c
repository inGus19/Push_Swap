#include "../../push_swap.h"

void	rb(t_satck *b)
{
	t_node	*first;

	if (b->sizen < 2)
		return ;
	first = dlst_remove_front(b);
	dlst_add_back(b, first);
}
