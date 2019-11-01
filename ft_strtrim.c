/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:25:53 by eliu              #+#    #+#             */
/*   Updated: 2019/10/31 16:09:00 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a copy of the string given as
**	argument without whitespaces at the beginning or at the end of the string
**	Will be considered as whitespaces the following characters ' ', '\t',
**	'\n'. If s has no whitespaces at the beginning or at the end, the
**	function returns a copy of s. if the allocation fails the function
**	returns NULL.
*/

char	*ft_strtrim(char const *s)
{
	char	*trim;

	if (!(trim = (char*)malloc(ft_strcnt(s))))
		return (NULL);
	trim = 
}
