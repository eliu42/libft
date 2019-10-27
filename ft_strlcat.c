/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:18:41 by eliu              #+#    #+#             */
/*   Updated: 2019/10/27 15:30:47 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	cap;

	i = 0;
	while (dst[i])
		i++;
	cap = dstsize - ft_strlen(dst) - 1;
	while (i < cap)
	{
		dst[i] = src[i];
		i++;
	}
	return (ft_strlen(dst));
}
