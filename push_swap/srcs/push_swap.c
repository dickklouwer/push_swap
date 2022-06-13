/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:23:03 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/06/13 15:35:43 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

t_stack	*lst_new(int value)
{
	t_stack *new;

	new = ft_calloc(ft_intlen(value), sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = ft_calloc(ft_intlen(value) + 1, sizeof(int));
	new->value = &value;
	new->next = NULL;
	return (new);
}

int	parse_stack(t_stack **stack, char **argv)
{
	int i;

	i = 0;
	while (argv[i][0])
	{
		*stack = lst_new(ft_atoi(argv[i]));
		printf("%i", *stack.value);
		i++;
	}
	return (0);
}

int main(int argc, char **argv )
{
	t_stack **stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 0)
		return (0);
	else
	{
		parse_stack(stack_a, argv);
	}
	return (0);
}