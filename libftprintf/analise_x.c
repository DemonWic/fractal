/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analise_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:00:35 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 13:00:37 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char			*ft_x_2(unsigned int num)
{
	char			*str;
	char			*res;
	int				k;

	k = ft_power(num, 16) - 1;
	str = ft_itoa_base(16, 0);
	res = ft_strnew((size_t)k + 1);
	while (k >= 0)
	{
		res[k] = str[num % 16];
		num = num / 16;
		k--;
	}
	free(str);
	return (res);
}

int					ft_x(va_list ap, t_print *new)
{
	char			*str;
	unsigned int	num;

	num = va_arg(ap, unsigned int);
	str = ft_x_2(num);
	if (num == 0)
	{
		free(str);
		return (ft_sobachiy_null(new));
	}
	num = (unsigned int)ft_uinteger_print(str, new);
	free(str);
	return (num);
}
