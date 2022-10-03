/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 13:23:03 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/10/03 14:39:30 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		check_double(char **argv, int argc)
{
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
	int check;
	long nb_argv;
	int i;

	i = 0;
	nb_argv = 0;
	check = check_double(argv, argc);
	if ((check))
		return (1);
	while (argc > 0)
	{
		argc--;
		nb_argv = ft_atol(argv[argc]);
		if ((ft_isalpha(*argv[argc])) || (nb_argv > 2147483647) || (nb_argv < -2147483648))
			return (1);
	}
	return (0);
}

int	parse_stack(t_stack *stack, char **argv, int argc)
{
	int nb;
	int i;
	t_stack *temp;
	
	nb = 0;
	i = 2;
	while (i < argc)
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
	if (argc > 0 && !valid_input(argv, argc))
	{
		stack_a.content = ft_atoi(argv[1]);
		parse_stack(&stack_a, argv, argc);
		ft_putstack(&stack_a);
	}
	return (0);
}
