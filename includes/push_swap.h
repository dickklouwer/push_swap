/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:30:53 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/10/06 12:12:23 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "../libft/libft.h"
#include "limits.h"

typedef struct s_stack
{
    int             content;
    struct s_stack  *next;
}              t_stack;

t_stack	*ft_stcknew(int content);
t_stack	*ft_stcklast(t_stack *stack);
void	ft_stckadd_back(t_stack **lst, t_stack *new);
void	ft_stckadd_front(t_stack **stack, t_stack *new);
void	ft_putstack(t_stack *stack);

t_stack get_top(t_stack *stack);

t_stack get_max(t_stack *stack);

int check_is_sorted(t_stack *stack);

int	valid_input(char **argv, int argc);

int sort_stack(t_stack *stack_a, t_stack stack_b);

void push_ab(t_stack *a, t_stack **b);
void swap_ab(t_stack *stack_a);
void push(int num, t_stack **stack);
void pop(t_stack *stack);
void rotate_ab(t_stack **stack);
void r_rotate_ab(t_stack **stack, int argc);

#endif