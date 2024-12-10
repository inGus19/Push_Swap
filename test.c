#include "push_swap.h"
#include <stdio.h>

void dlst_print(t_stack *stack)
{
    t_node *current;

    if (!stack || !stack->top)
    {
        printf("(stack is empty)\n");
        return;
    }

    current = stack->top;
    printf("Stack (size: %d): ", stack->size);
    while (current)
    {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main(void)
{
    t_stack stack_a;
    t_stack stack_b;

    // Initialisation des piles
    dlst_init(&stack_a);
    dlst_init(&stack_b);

    // Ajout de quelques éléments à stack_a
    dlst_add_back(&stack_a, dlst_new(1));
    dlst_add_back(&stack_a, dlst_new(2));
    dlst_add_back(&stack_a, dlst_new(3));

    printf("Stack A avant mouvements :\n");
    dlst_print(&stack_a);
    printf("\n");
/*
    // Test des mouvements
    printf("Applique sa (swap a) :\n");
    sa(&stack_a);
    dlst_print(&stack_a);
    printf("\n");

    printf("Applique pb (push b) :\n");
    pb(&stack_a, &stack_b);
    dlst_print(&stack_a);
    printf("Stack B :\n");
    dlst_print(&stack_b);
    printf("\n");

    printf("Applique ra (rotate a) :\n");
    ra(&stack_a);
    dlst_print(&stack_a);
    printf("\n");

    printf("Applique rra (reverse rotate a) :\n");
    rra(&stack_a);
    dlst_print(&stack_a);
    printf("\n");

    // Libération des piles
    free_dlst(&stack_a);
    free_dlst(&stack_b);
*/
    return (0);
}
