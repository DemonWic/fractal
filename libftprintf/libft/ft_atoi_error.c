/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:29:57 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:30:00 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi_with_err(const char *str, int *err)
{
	long	ret;
	long	max_int;
	int		count;
	int		sign;

	ret = 0;
	count = 0;
	sign = 1;
	*err = 0;
	max_int = (str[count] == '-') ? (INT_MIN) : (INT_MAX);
	if (str[count] == '-')
	{
		sign = -1;
		count++;
	}
	while ((str[count] >= '0') && (str[count] <= '9') && (ret < max_int))
	{
		ret *= 10;
		ret = ret + (str[count++] - '0');
	}
	if (ret > max_int)
		*err = 1;
	return ((int)ret * sign);
}
