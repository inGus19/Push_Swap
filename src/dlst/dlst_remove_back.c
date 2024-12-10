#include "push_swap.h"

t_node	*dlst_remove_back(t_stack *stack)
{
	t_node *removed_node;

	if (!stack || !stack->bottom)
		return (NULL);
	removed_node = stack->bottom;
	stack->bottom = removed_node->prev;
	if (stack->bottom)
		stack->bottom->next = NULL;
	else
		stack->top = NULL;
	stack->size--;
	return (removed_node);
}
