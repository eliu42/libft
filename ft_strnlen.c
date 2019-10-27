/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:38:07 by eliu              #+#    #+#             */
/*   Updated: 2019/10/27 14:39:48 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Computes the length of `s`, not more than `maxlen` chars. 
*/

size_t ft_strnlen(const char *s, size_t maxlen)
{
	size_t i;

	i = 0;
	while (s[i] && i < maxlen)
		i++;
	return (i);
}
