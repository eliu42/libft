/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 17:21:12 by eliu              #+#    #+#             */
/*   Updated: 2019/10/31 17:26:41 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Takes as a parameter a link's pointer address and frees the memory of
**	the link's content using the function del given as a parameter, then
**	frees te link's memory using free(3). The memory of next must not be
**	freed under any circrumstance. Finally, the pointer to the link that 
**	was just freed must be set to NULL. (quite similar to the function
**	ft_memdel in the mandatory part).
**	Param 1: the address of a pointer to a link that needs to be freed.
*/

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	*alst 
}
