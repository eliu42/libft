/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 17:31:24 by eliu              #+#    #+#             */
/*   Updated: 2019/10/31 17:34:40 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Iterates a list lst and applies the function f to each link to create a "fresh" list resulting from the successive applications of f.If the allocation
**	fails, the function returns NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	while (lst)
	{
		lst = f(lst);
		lst = lst->next;
	}
	return (lst);
}
