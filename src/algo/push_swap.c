void	push_swap(t_stack *a, t_stack *b)
{
	if (!is_sorted(a))
	{
		if (a->size == 2)
			sa(a);
		else if (a->size == 3)
			sort_three(a);
		else if (a->size <= 5)
			sort_stack(a, b, 1);
		else
			big_sort(a, b);
	}
}

