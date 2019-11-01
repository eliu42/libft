/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:06:06 by eliu              #+#    #+#             */
/*   Updated: 2019/10/31 15:08:16 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Applies the function f to each chater of the string passed as argument.
**	Each character is passed by address to f to be modified if necessary.
*/

void	ft_striter(char *s, void (*f)(char*))
{
	while (s)
	{
		s = f(s);
		s++;
	}
	return ;
}
