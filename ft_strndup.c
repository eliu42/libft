/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:46:43 by eliu              #+#    #+#             */
/*   Updated: 2019/10/27 15:03:21 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copies at most `n` characters from s1, always null terminating.
*/
	
char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	size_t	len;
	char	*new;

	len = ft_strlen(s1);
	new = (char*)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < n)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
