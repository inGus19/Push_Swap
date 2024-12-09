#include "../push_swap.h"

void dlst_add_front(t_stack *stack, t_node *new_node) 
{
    if (!stack || !new_node)
        return;
    new_node->next = stack->top;
    if (stack->top)
        stack->top->prev = new_node;
    stack->top = new_node;
    if (!stack->bottom)
        stack->bottom = new_node;
    stack->size++;
}
