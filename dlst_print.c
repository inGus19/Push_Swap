#include "push_swap.h"

void dlst_print(t_stack *stack) 
{
    t_node *current = stack->top;
    while (current) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}
