#include "../push_swap.h"

void    ft_rotate_a(struct my_pile *pile)
{
    my_stack    *top;
    int         temp;  

    top = pile;
    temp = top->val;
    while (top->next != NULL)
    {
        top->val = top->next->val;
        top = top->next;
    }
    top->val = temp;
    printf("ra\n");
}

void    ft_rotate_b(struct my_pile *pile)
{
    my_stack    *top;
    int         temp;  

    top = pile;
    temp = top->val;
    while (top->next != NULL)
    {
        top->val = top->next->val;
        top = top->next;
    }
    top->val = temp;
    printf("rb\n");
}

void    ft_rotate_all(struct my_pile *pile_a, struct my_pile *pile_b)
{
    my_stack    *top;
    int         temp;  

    top = pile_a;
    temp = top->val;
    while (top->next != NULL)
    {
        top->val = top->next->val;
        top = top->next;
    }
    top->val = temp;

    top = pile_b;
    temp = top->val;
    while (top->next != NULL)
    {
        top->val = top->next->val;
        top = top->next;
    }
    top->val = temp;
    printf("rr\n");
}