#include <stdio.h>
#include "push_swap.h"

int main()
{
    t_stack a1 = {1, NULL};
    t_stack a2 = {2, &a1};
    t_stack a3 = {3, &a2};

    t_stack *stack_a = &a3;
    printf("Pile a avant swap : ");
    print_stack(stack_a);
    sa(&stack_a);
    printf("Pile a après swap : ");
    print_stack(stack_a);
    return 0;
}
