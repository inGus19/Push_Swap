#include "../push_swap.h"

t_node *dlst_new(int value) 
{
    t_node *new_node = malloc(sizeof(t_node));
    if (!new_node)
        return (NULL);
    new_node->value = value;
    new_node->prev = NULL;
    new_node->next = NULL;
    return (new_node);
}
