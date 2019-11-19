/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:29:39 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:29:46 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		x;
	int		result;
	int		znak;

	x = 0;
	result = 0;
	znak = 0;
	while (str[x] == '\f' || str[x] == '\n' || str[x] == '\r' || str[x] == '\t'\
		|| str[x] == '\v' || str[x] == ' ')
		x++;
	if ((str[x] == '-' || str[x] == '+') && znak == 0)
	{
		if (str[x] == '-')
			znak = -1;
		else if (str[x] == '+')
			znak = 1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + (str[x] - '0');
		x++;
	}
	return (result = (znak == -1 ? result * -1 : result));
}
