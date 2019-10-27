/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:40:11 by eliu              #+#    #+#             */
/*   Updated: 2019/10/27 14:46:37 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates sufficient memory for a copy of s1, does the copy, and
**	returns a pointer to it.
*/

char	*ft_strdup(const char *s1)
{
	size_t i;
	size_t len;
	char	*new;

	len = ft_strlen(s1);
	if (!(new = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_memcpy(new, s1, len);
	return (new);
}
