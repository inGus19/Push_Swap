void	move_to_top(t_stack *stack, t_node *node)
{
	int		pos;
	t_node	*current;

	pos = 0;
	current = stack->top;
	while (current && current != node)
	{
		current = current->next;
		pos++;
	}
	if (pos <= stack->size / 2)
		while (stack->top != node)
			rotate(stack);
	else
		while (stack->top != node)
			reverse(stack);
}
