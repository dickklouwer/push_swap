/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:23:03 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/09/22 17:51:22 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>
#include <stdlib.h>

// t_stack	*lst_new(int value)
// {
// 	t_stack *new;

// 	new = (void *)malloc(sizeof(t_stack));
// 	if (!new)
// 		return (NULL);
// 	new->value = value;
// 	new->next = NULL;
// 	return (new);
// }

int	parse_stack(t_list **stack, char **argv, int argc)
{
	int nb;
	t_list *temp;
	
	nb = 0;
	while (argc > 1)
	{
		argc--;
		nb = ft_atoi(argv[argc]);
		temp = ft_lstnew(nb);
		printf("%i\n", temp->content);
		ft_lstadd_back(stack, temp);
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_list **stack_a;

	stack_a = NULL;
	if (argc == 0)
		return (0);
	else
	{
		parse_stack(stack_a, argv, argc);
	}
	return (0);
}