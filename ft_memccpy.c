/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:22:13 by eliu              #+#    #+#             */
/*   Updated: 2019/10/27 14:26:48 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copies at most `n` bytes from src to dst
**	If a character `c` is found,
**	A pointer to the character after C is returned.
**	Otherwise copies all and returns NULL.
*/

void	*memccpy(void *dst, void *src, int c, size_t n)
{
	int		i = 0;

	if (!dst || !dst)
		return (NULL);
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i] == c)
			return (dst + i);
		i++;
	}
	return (NULL);
}
