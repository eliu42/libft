/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:29:57 by eliu              #+#    #+#             */
/*   Updated: 2019/10/31 16:07:09 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <unistd.h>
int		ft_strcnt(char *s)
{
	int	size;

	size = 0;
	while (s)
	{
		//if ((int)s != ' ' && *s != (char)'\t' && (unsigned char)s != (unsigned char)'\n')
		//	size++;
		if ((char)*s != ' ')
			write(1, "Not a space\n", 12);
		if ((char)*s != '\t')
			write(1, "Not a tab\n", 9);
		if ((char)*s != '\n')
			write(1, "Not a newline\n", 14);
		s++;
	}
	return (size);
}
