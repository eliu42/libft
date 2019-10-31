/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 13:19:43 by eliu              #+#    #+#             */
/*   Updated: 2019/10/28 13:29:10 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Locates the first occurence of the null-terminated string needle
**	in the string haystack.
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	if (!needle)
		return (haystack);
	i = 0;
	while (haystack[i] && needle[i])
	{
		if (haystack[i] == needle[i])
		{
			j = i;
			while (needle[j])
			{
				if (!needle[j])
					return (haystack + j);

			}
		}
	}
	return (haystack + i);
}
