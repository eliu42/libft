/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:16:11 by eliu              #+#    #+#             */
/*   Updated: 2019/10/31 17:51:21 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Append a copy of the null terminated string s2 to the end of the null-
**	terminted string s1, then add a terminating '\0'. The string s1 must have
**	sufficient space to hold the result.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s[i] = '\0';
	return (s1);
}
