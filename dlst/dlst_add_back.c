#include "../push_swap.h"

void dlst_add_back(t_stack *stack, t_node *new_node) 
{
    if (!stack || !new_node)
        return;

    if (stack->size == 0) {
        stack->top = new_node;
        stack->bottom = new_node;
    } else {
        stack->bottom->next = new_node;
        new_node->prev = stack->bottom;
        stack->bottom = new_node;
    }
    stack->size++;
}
