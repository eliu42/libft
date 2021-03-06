/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:11:07 by eliu              #+#    #+#             */
/*   Updated: 2019/10/27 15:15:58 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t 	i;

	i = 0;
	while (s1[i])
		i++;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
