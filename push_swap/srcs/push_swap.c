/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:23:03 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/05/31 14:50:09 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

int	parse_stack(t_stack *stack, char **argv)
{
	int i;
	int value;
	t_list temp;
	
	i = 0;
	while(argv[i])
	{
		value = ft_atoi(&argv[i][0]);
		temp = *ft_lstnew(&value);
		printf("%d\n", temp.content);
		i++;
	}
	return (0);
}

int main(int argc, char **argv )
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_b = NULL;
	if (argc == 0)
		return (0);
	else
	{
		parse_stack(stack_a, argv);
	}
	return (0);
}