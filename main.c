#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack stack_a;
    t_stack stack_b;

    // Initialisation des piles
    dlst_init(&stack_a);
    dlst_init(&stack_b);

    // Analyse des arguments et remplissage de stack_a
    if (!parse_arguments(argc, argv, &stack_a))
    {
        free_dlst(&stack_a);
        write(2, "Error\n", 6);
        return (1);
    }

    // Lancement de l'algorithme de tri
    if (!is_sorted(&stack_a))
        sort_stack(&stack_a, &stack_b);

    // Libération de la mémoire
    free_dlst(&stack_a);
    free_dlst(&stack_b);
    return (0);
}
