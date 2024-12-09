#include "push_swap.h"

int	find_mini(t_node *a)
{
	int	min;
	int	mini;
	int	i;

	min = a->value;
	mini = 0;
	i = 0;
	while(a)
	{
		if (a->value < min)
		{
			min = a->value;
			mini = i;
		}
		a = a->next;
		i++;
	}
	return (mini);
}

void	bring_to_top(t_stack **a, int i)
{
	int	size;

	size = ft_lstsize(*a);
	if (i <= size / 2)
	{
		while(i > 0)
		{
			rra(a); // Decale vers le bas
			i--;
		}
	}
}

void move_back_to_a(t_stack **a, t_stack **b)
{
    while (*b)
        pa(a, b);
}

void	insertion_sort(t_stack **a, t_stack **b)
{
	int	mini;
	
	while (*a)
	{
		mini = find_mini(a);
		bring_to_top(a, mini);
		pb(a, b);
	}
	while (*b)
		pa(a, b);
}

int main()
{
	t_list	stack *a = NULL;

	dlst_add_back(&stack_a, 4);
	dlst_add_back(&stack_a, 2);
	dlst_add_back(&stack_a, 5);
	dlst_add_back(&stack_a, 1);
	dlst_add_back(&stack_a, 3);
	
	dlst_print(lst);
	insertion_sort(&stack_a);
	dlst_print(lst);
	free_stack(lst);
}
/*
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
*/
