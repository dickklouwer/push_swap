/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:23:03 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/09/29 16:03:21 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


// CHECK CHECKS!!!

int		check_double(char **argv, int argc)
{
	int i;
	int j;

	i = 1;
	j = i + 1;
	printf("((%d))", argc);
	while(i < argc)
	{
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				write(1, "$", 1);
				return (1);
			}
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
	int check;
	
	c = 0;
	// check = 0;
	int i = 1;
	while(argc > 0)
	{
		c = ft_atoi(argv[argc]);
		check = check_double(argv, argc);
		if (check_double(argv, argc))
		{
			write(1, "$", 1);
			return (0);
		}
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
	if (!valid_input(argv, argc))
		return (0);
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

int main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack *stack_b;
	
	stack_b = NULL;
	if (argc > 0)
	{
		printf("[[%d]]", check_double(argv, argc));
		parse_stack(&stack_a, argv, argc - 1);
		ft_putstack(&stack_a);
		// ft_stcklast(stack_a);
		// check_is_sorted(stack_a);
	}
	return (0);
}