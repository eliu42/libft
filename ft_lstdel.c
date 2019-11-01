/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 17:26:44 by eliu              #+#    #+#             */
/*   Updated: 2019/10/31 17:28:41 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Takes as a parameter the address of a pointer to a link and frees the
**	memory of this link and every successors of that link using the functions
**	del and free(3). Finnaly the pointer to the link that was jut freed must
**	be set to NULL (quite similar to the function ft_memdel in the mandatory
**	part.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{

}
