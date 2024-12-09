#include "push_swap.h"

int main(int argc, char **argv)
{
    t_dlist *stack_a;
    t_dlist *stack_b;

    // Initialisation des piles
    stack_a = dlst_new();
    stack_b = dlst_new();

    if (argc < 2)
    {
        // Pas assez d'arguments, on termine le programme.
        write(2, "Error: Not enough arguments\n", 27);
        return 1;
    }

    // Remplir la pile a avec les valeurs passées en arguments
    if (!parse_arguments(argc, argv, &stack_a))
    {
        write(2, "Error: Invalid input\n", 21);
        free_stack(stack_a);
        free_stack(stack_b);
        return 1;
    }

    // Vérification si la pile est déjà triée
    if (is_sorted(stack_a))
    {
        free_stack(stack_a);
        free_stack(stack_b);
        return 0;
    }

    // Algorithme de tri
    sort_stack(&stack_a, &stack_b);

    // Libération de la mémoire allouée
    free_stack(stack_a);
    free_stack(stack_b);

    return 0;
}

