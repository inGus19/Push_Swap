#include "push_swap.h"

void	free_dlst(t_stack *stack)
{
	t_node	*current;
	t_node	*next_node;

	if (!stack)
		return ;
	current = stack->top;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	stack->top = NULL;
	stack->bottom = NULL;
	stack->size = 0;
}

