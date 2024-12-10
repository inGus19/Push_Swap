#include "push_swap.h"

int	is_unique(int value, t_stack *stack);
{
	t_node	*current;

	current = stack->top;
	while(current)
	{
		if(current->value == value)
			return (0);
		current = current->next;
	}
	return (1);
}
