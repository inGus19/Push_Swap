void	back_to_a(t_stack *a, t_stack *b)
{
	t_node *max_node;

	while (b->size > 0)
	{
		max_node = find_max_node(b);
		move_to_top(b, max_node);
		pa(a, b);
	}
}
