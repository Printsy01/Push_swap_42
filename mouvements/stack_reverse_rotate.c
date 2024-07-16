#include "../push_swap.h"

void    ft_reverse_rotate_a(struct my_pile *pile)
{
    my_stack *top;
    my_stack *temp;

    top = pile;
    while (top->next != NULL)
    {
        top = top->next;
    }
    temp = ft_new_stack(top->val);
    top = pile;
    while (top->next->next != NULL)
    {
        ft_append(&temp, top->val);
        top = top->next;
    }
    pile = temp;
}