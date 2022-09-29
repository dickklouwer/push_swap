/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:23:03 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/09/29 15:44:09 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


// CHECK CHECKS!!!

int		check_double(char *argv[], int argc)
{
	write(1, "$" , 1);
	int i;
	int j;

	i = 1;
	j = i + 1;	
	while(i < argc)
	{
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		j = i + 2;
		i++;
	}
	return (0);
}

int		valid_input(char **argv, int argc)
{
	// int check;
	int c;
	
	c = 0;
	// check = 0;
	while(argc > 0)
	{
		printf("!! %d", argc);
		c = ft_atoi(argv[argc]);
		if (check_double(argv, argc))
			return (0);
		argc--;
	}
	return (1);
}

int	parse_stack(t_stack *stack, char **argv, int argc)
{
	int nb;
	int i;
	t_stack *temp;
	
	nb = 0;
	i = 1;
	while (valid_input(argv, argc))
	{
		while (i < argc + 1)
		{
			nb = ft_atoi(argv[i]);
			if (!nb)
				break ;
			temp = ft_stcknew(nb);
			if (!temp)
			{
				free(temp);
				break ;
			}
			ft_stckadd_back(&stack, temp);
			i++;
		}
		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack *stack_b;
	
	stack_b = NULL;
	if (argc > 0)
	{
		parse_stack(&stack_a, argv, argc - 1);
		ft_putstack(&stack_a);
		// ft_stcklast(stack_a);
		// check_is_sorted(stack_a);
	}
	return (0);
}