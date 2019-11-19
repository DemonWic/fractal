/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analise_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:00:10 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 13:00:13 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char				*ft_uinteger_2(unsigned int num)
{
	char			*str;
	int				k;

	k = ft_power(num, 10) - 1;
	str = ft_strnew((size_t)k + 1);
	while (k >= 0)
	{
		str[k] = (char)(num % 10 + '0');
		num = num / 10;
		k--;
	}
	return (str);
}

int					ft_uinteger(va_list ap, t_print *new)
{
	unsigned int	num;
	char			*str;

	num = (unsigned int)va_arg(ap, int);
	str = ft_uinteger_2(num);
	if (num == 0)
	{
		free(str);
		return (ft_sobachiy_null(new));
	}
	num = (unsigned int)ft_uinteger_print(str, new);
	free(str);
	return (num);
}
