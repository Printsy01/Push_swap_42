#include "push_swap.h"

int main(int argc, char *argv[])
{
    my_stack *pile;
    int     i;

    if (argc < 2)
    {
        printf("Error\n");
        return (0);
    }
    i = argc - 2;
    pile = ft_new_stack(ft_atoi(argv[argc - 1]));
    while (i != 0)
    {
        ft_append(&pile, ft_atoi(argv[i]));
        i--;
    }
    int middle = get_middle(pile);
    // printf("val = %d\n",find_middle(pile, get_middle(pile)));
    // int next = find_middle(pile, middle);
    printf("next is %d\n", get_next_to(pile, middle, 1));
    // ft_print_stack(pile);
    // ft_print_stack(pile);
}