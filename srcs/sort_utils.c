/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_utils.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 10:24:07 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/10/06 12:59:35 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void swap_ab(t_stack *stack)
{
    t_stack *s_next;
    
    s_next = stack->next;
    if (s_next->next != NULL && stack->next != NULL)
    {
        stack->next = s_next->next;
        s_next->next = stack;
        stack = s_next;
    }
    return ;
}

void rotate_ab(t_stack **stack)
{
    t_stack *last;
    t_stack *first;

    first = *stack;
    last = ft_stcklast(*stack);
    *stack = (*stack)->next;
    last->next = first;
    last = first;
    first->next = NULL;
    return ;
}

void r_rotate_ab(t_stack **stack, int argc)
{
    t_stack *last;
    t_stack *temp;

    last = ft_stcklast(*stack);
    push(last->content, stack);
    temp = *stack;
    while (temp->next->next != NULL)
        temp = temp->next;
    last = ft_stcklast(*stack);
    temp->next = NULL;
    free(last);
    return ;
}

void push_ab(t_stack *a, t_stack **b)
{
    push(a->content, b);
    pop(a);
    return ;
}

void pop(t_stack *stack)
{
    t_stack *temp;

    temp = stack->next;
    *stack = *stack->next;
    free(temp);
}

void push(int num, t_stack **stack)
{
    t_stack *new;

    new = ft_stcknew(num);
    if (!new)
        return ;
    ft_stckadd_front(stack, new);
}
