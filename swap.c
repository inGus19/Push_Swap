#include "push_swap.h"

void sa(t_stack **stack_a)
{
	t_stack *first;
	t_stack *second;

	if (!stack_a || !(*stack_a) || !((*stack_a)->next))
		return;
	first = *stack_a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_a = second;
}

void sb(t_stack **stack_b)
{
	t_stack *first;
	t_stack *second;

	if (!stack_b || !(*stack_b) || !((*stack_b)->next))
		return;
	first = *stack_b;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_b = second;
}

void sab(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

#include <stdio.h>

void print_stack(t_stack *stack)
{
    while (stack)
    {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}
