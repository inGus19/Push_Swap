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

void	test_pb()
{

}

int	main()
{
	test_pb();
}
