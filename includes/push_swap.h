/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:30:53 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/09/28 15:25:28 by tklouwer      ########   odam.nl         */
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
void	ft_putstack(t_stack *stack);

int get_top(t_stack *stack);

int check_is_sorted(t_stack *stack);

int		valid_input(char **argv, int argc);

#endif