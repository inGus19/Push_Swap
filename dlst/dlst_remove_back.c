#include "../push_swap.h"

t_node *dlst_remove_back(t_stack *stack) 
{
    if (!stack || stack->size == 0)
        return (NULL);

    t_node *node = stack->bottom;
    if (stack->size == 1) {
        stack->top = NULL;
        stack->bottom = NULL;
    } else {
        stack->bottom = node->prev;
        stack->bottom->next = NULL;
    }
    stack->size--;
    node->prev = NULL;
    return (node);
}
