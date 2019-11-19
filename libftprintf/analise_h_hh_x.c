/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analise_h_hh_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:56:36 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:56:39 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char				*ft_hh_x_2(unsigned char num)
{
	char				*str;
	char				*res;
	int					k;

	k = ft_power_hh(num, 16);
	str = ft_itoa_base(16, 0);
	res = ft_strnew((size_t)k);
	while (--k >= 0)
	{
		res[k] = str[num % 16];
		num = num / 16;
	}
	free(str);
	return (res);
}

int						ft_hh_x(va_list ap, t_print *new)
{
	char				*str;
	unsigned char		num;
	int					res;

	num = (unsigned char)va_arg(ap, unsigned int);
	str = ft_hh_x_2(num);
	res = ft_uinteger_print(str, new);
	free(str);
	return (res);
}

static char				*ft_h_x_2(unsigned short int num)
{
	char				*str;
	char				*res;
	int					k;

	k = ft_power_h(num, 16);
	str = ft_itoa_base(16, 0);
	res = ft_strnew((size_t)k);
	while (--k >= 0)
	{
		res[k] = str[num % 16];
		num = num / 16;
	}
	free(str);
	return (res);
}

int						ft_h_x(va_list ap, t_print *new)
{
	char				*str;
	unsigned short int	num;
	int					res;

	num = (unsigned short int)va_arg(ap, unsigned int);
	str = ft_h_x_2(num);
	res = ft_uinteger_print(str, new);
	free(str);
	return (res);
}
