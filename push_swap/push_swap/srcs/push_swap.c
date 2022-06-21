/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:23:03 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/06/21 14:53:51 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

t_stack	*lst_new(int value)
{
	t_stack *new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

int	parse_stack(t_stack **stack, char **argv)
{
	int i;
	t_stack *head;

	i = 0;
	head = *stack;
	while (argv[i])
	{
		// printf("%s\n", argv[i]);
		while(head != NULL)
		{
			head = lst_new(ft_atoi(argv[i]));
			printf("%d\n", head->value);
			head = head->next;
		}
		i++;	
		head[i] = NULL;
	}
	return (0);
}

int main(int argc, char **argv )
{
	t_stack **stack_a;

	stack_a = NULL;
	if (argc == 0)
		return (0);
	else
	{
		parse_stack(stack_a, argv);
	}
	return (0);
}