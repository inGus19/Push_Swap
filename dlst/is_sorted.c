#include "../push_swap.h"

int is_sorted(t_stack *stack) 
{
    t_node *current = stack->top;
    while (current && current->next) {
        if (current->value > current->next->value) {
            return 0; // La pile n'est pas triée
        }
        current = current->next;
    }
    return 1; // La pile est triée
}
