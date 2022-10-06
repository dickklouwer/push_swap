/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 14:06:11 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/10/05 10:24:04 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack get_max(t_stack *stack)
{
    int max;

    max = stack->content;

    while(stack->next != NULL)
    {
        if (stack->content > max)
            max = stack->content;
        stack = stack->next;
    }
    return (*stack);
}

int check_is_sorted(t_stack *stack)
{
    while (stack->next != NULL)
    {
        if (stack->content < stack->next->content)
            return (1);
        stack = stack->next;
    }
    return (0);
}

int sort_stack(t_stack *stack_a, t_stack stack_b)
{
    write(1, "$", 1);
    stack_b.content = 0;
    if (check_is_sorted(stack_a))
        return (1);
    return (0);
}