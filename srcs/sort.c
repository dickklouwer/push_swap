/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 14:06:11 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/09/28 14:36:28 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int get_top(t_stack *stack)
{
    if (!stack)
        return (0);
    return (stack->content);
}

int check_is_sorted(t_stack *stack)
{
    while (stack->next != NULL)
    {
        if (stack->content > stack->next->content)
        {
            write(1, "1", 1);
            // stack = stack->next;
        }
        stack = stack->next;
    }
    return (1);
}