#include "../push_swap.h"

void    ft_swap_a(struct my_pile *pile)
{
    my_stack    *top;
    my_stack    *tempo;
    int         temp;  

    top = pile;
    tempo = top->next;
    temp = top->val;
    top->val = tempo->val;
    tempo->val = temp;
    printf("sa\n");
}

void    ft_swap_b(struct my_pile *pile)
{
    my_stack    *top;
    my_stack    *tempo;
    int         temp;  

    top = pile;
    tempo = top->next;
    temp = top->val;
    top->val = tempo->val;
    tempo->val = temp;
    printf("sb\n");
}

void    ft_swap_all(struct my_pile *pile_a, struct my_pile *pile_b)
{
    my_stack    *top;
    my_stack    *tempo;
    int         temp;  

    top = pile_a;
    tempo = top->next;
    temp = top->val;
    top->val = tempo->val;
    tempo->val = temp;

    top = pile_b;
    tempo = top->next;
    temp = top->val;
    top->val = tempo->val;
    tempo->val = temp;
    printf("ss\n");
}