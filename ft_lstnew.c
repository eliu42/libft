/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:50:41 by eliu              #+#    #+#             */
/*   Updated: 2019/10/31 17:21:07 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!content || !content_size)
		return (NULL);
	if (!(new = (t_list*)malloc(sizeof(content_size))))
		return (NULL);
	new->content = content;
	new->content_size = content_size;
	return (new);
}
