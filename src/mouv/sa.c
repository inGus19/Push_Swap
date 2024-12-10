void	sa(t_satck *a)
{
	t_node	*first;
	t_node	*second;

	if (a->size < 2)
		return ;
	first = a->top;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	first->prev = second;
	second->prev = NULL;
	a->top = second;
}
