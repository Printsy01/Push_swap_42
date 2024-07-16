#include "../push_swap.h"

int get_middle(struct my_pile *pile)
{
    my_stack *top;
    // int max;
    // int min;
    int middle;
    int length;
    int sum;

    top = pile;
    length = 0;
    sum = 0;
    // max = top->val;
    // min = top->val;
    while (top->next != NULL)
    {
        // if (top->val > max)
        //     max = top->val;
        // if (top->val < min)
        //     min = top->val;
        sum += top->val;
        length++;
        top = top->next;
    }
    middle = sum / length;
    printf("middle = %d\n", middle);
    return (middle);
}

int find_middle(struct my_pile *pile, int middle)
{
    int inf;
    int sup;
    my_stack *top;

    inf = 0;
    sup = 0;
    top = pile;
    while (top != NULL)
    {
        if (top->val > middle)
            sup++;
        if (top->val < middle)
            inf++;
        top = top->next;
    }
    printf("inf = %d || sup = %d\n", inf, sup);
    if (sup > inf)
        return (1);
    if (inf > sup)
        return (-1);
    return (0);
}

int get_next_to(struct my_pile *pile, int middle, int pos)
{
    my_stack    *top;
    int         next_up;
    int         next_down;

    top = pile;
    next_down = top->val;
    next_up = top->val;
    while (top != NULL)
    {
        if (middle == top->val)
            top = top->next;
        if (middle < top->val && (middle - top->val > middle - next_up)
        || middle >= top->val)
            next_up = top->val;
        if (middle - top->val < middle - next_down)
            next_down = top->val;
        printf("val = %d\n", next_up);
        top = top->next;
    }
    if (pos > 0)
        return (next_up);
    if (pos < 0)
        return (next_down);
    return (0);
}