#include "push_swap.h"

t_node	*dlst_remove_front(t_stack *stack)
{
	t_node	*removed_node;

	if (!stack || !stack->top)
		return (NULL);
	removed_node = stack->top;
	stack_top = removed_node->next;
	if (stack->top)
		stack->top->prev = NULL;
	else
		stack->bottom = NULL;
	stack->size--;
	return (removed_node);
}
