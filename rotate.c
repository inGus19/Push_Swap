#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || stack->size < 2)
		return ;
	first = stack->top;
	second = stack->top->next;
	second->prev = NULL;
	first->prev = stack->bot;
	first->next = NULL;
	stack->bot->next = first;
	stack->top = second;
	stack->bot = first;
}

void	ra(t_stack *a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

