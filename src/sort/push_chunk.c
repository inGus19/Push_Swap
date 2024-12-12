void	push_chunk(t_stack *a, t_stack *b, int pivot)
{
	int	size;
	int	i;

	size = a->size;
	i = 0;
	while (i < size)
	{
		if (a->top->value <= pivot)
			pb(b, a);
		else
			ra(a);
		i++;
	}
}
