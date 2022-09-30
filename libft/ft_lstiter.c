/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tklouwer <tklouwer@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 14:08:32 by tklouwer      #+#    #+#                 */
/*   Updated: 2022/09/28 10:50:22 by tklouwer      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstiter(t_list *lst, int (*f)(int))
{
	if (!lst)
		return 0;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
	return (0);
}
