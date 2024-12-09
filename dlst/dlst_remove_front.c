#include "../push_swap.h"

t_node *dlst_remove_front(t_stack *stack) 
{
    if (!stack || stack->size == 0)
        return (NULL);

    t_node *node = stack->top;
    if (stack->size == 1) {
        stack->top = NULL;
        stack->bottom = NULL;
    } else {
        stack->top = node->next;
        stack->top->prev = NULL;
    }
    stack->size--;
    node->next = NULL;
    return (node);
}
