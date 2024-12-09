#include "../push_swap.h"

void free_stack(t_stack *stack) 
{
    t_node *current = stack->top;
    t_node *next_node;
    while (current) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    stack->top = NULL;
    stack->bottom = NULL;
    stack->size = 0;
}
