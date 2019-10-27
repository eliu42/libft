/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 13:52:53 by eliu              #+#    #+#             */
/*   Updated: 2019/10/27 14:27:45 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copies at most n bytes from src to dst.
**	Returns the original value of dst.
*/

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	int i = 0;

	if (!dst || !src)
		return (NULL);
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
