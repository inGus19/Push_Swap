#include "../../push_swap.h"

t_node	*find_max_node(t_stack *stack)
{
	t_node	*current;
	t_node	*max_node;

	current = stack->top;
	max_node = current;
	while (current)
	{
		if (current->value > max_node->value)
		{
			max_node = current;
			current = current->next;
		}
	}
	return (max_node);
}
