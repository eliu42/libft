/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 13:33:12 by eliu              #+#    #+#             */
/*   Updated: 2019/10/28 13:38:11 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		atoi(const char *str)
{
	int		i;
	int		result;
	int		negative;

	i = 0;
	result = 0;
	negative = 1;
	while (str[i])
	{
		while (isspsace(str[i]))
			i++;
		if (str[i] == '-')
			negative = -1;
		if (str[i] == '+' || str[i] == '-')
			i++;
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}
