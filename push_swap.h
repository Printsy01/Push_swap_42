#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

typedef struct my_pile
{
    int                 val;
    struct my_pile    *next;
}   my_stack;

my_stack    *ft_new_stack(int val);
void    ft_append(my_stack **pile, int val);
void    ft_print_stack(struct my_pile *pile);
int     ft_atoi(char const *nptr);
int     is_sorted(struct my_pile *pile);
void    ft_swap_a(struct my_pile *pile);
void    ft_swap_b(struct my_pile *pile);
void    ft_swap_all(struct my_pile *pile_a, struct my_pile *pile_b);
void    ft_rotate_a(struct my_pile *pile);
void    ft_rotate_b(struct my_pile *pile);
void    ft_rotate_all(struct my_pile *pile_a, struct my_pile *pile_b);
void    ft_reverse_rotate_a(struct my_pile *pile);
int     get_middle(struct my_pile *pile);
int     find_middle(struct my_pile *pile, int middle);
int     get_next_to(struct my_pile *pile, int middle, int pos);

#endif