#include "push_swap.h"

my_stack    *ft_new_stack(int val)
{
    my_stack *new_stack;

    new_stack = (my_stack*)malloc(sizeof(my_stack*));
    if (!new_stack)
    {
        free(new_stack);
        return (NULL);
    }
    new_stack->val = val;
    new_stack->next = NULL;
    return (new_stack);
}

void    ft_append(my_stack **pile, int val)
{
    my_stack *new_stack; 
    
    new_stack = ft_new_stack(val);
    new_stack->next = *pile;
    *pile = new_stack;
}

void    ft_print_stack(struct my_pile *pile)
{
    my_stack    *up_stack;

    up_stack = pile;
    while (up_stack != NULL)
    {
        printf("%d\n", up_stack->val);
        up_stack = up_stack->next;
    }
}

static int stack_length(struct my_pile *pile)
{
    my_stack    *up_stack;
    int         i;

    i = 0;
    up_stack = pile;
    while (up_stack != NULL)
    {
        i++;
        up_stack = up_stack->next;
    }
    return (i);
}

int is_sorted(struct my_pile *pile)
{
    int         temp;
    my_stack    *up_stack;

    up_stack = pile;
    while (up_stack != NULL)
    {
        temp = up_stack->val;
        up_stack = up_stack->next;
        if (up_stack != NULL && up_stack->val < temp)
            return (0);
    }
    return (1);
}