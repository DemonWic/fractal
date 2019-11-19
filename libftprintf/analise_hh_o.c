/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analise_hh_o.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:57:18 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:57:20 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_power_hh(unsigned char nb, int notation)
{
	int				res;

	res = 0;
	if (!nb)
		return (1);
	while (nb)
	{
		nb = nb / notation;
		res++;
	}
	return (res);
}

static char			*ft_hh_octal_2(unsigned char num)
{
	int				k;
	char			*str;
	char			*res;
	int				i;

	i = -1;
	k = ft_power_hh(num, 8);
	str = ft_itoa_base(8, 0);
	res = ft_strnew(k);
	while (--k >= 0)
	{
		res[k] = str[num % 8];
		num = num / 8;
	}
	free(str);
	return (res);
}

int					ft_hh_octal(va_list ap, t_print *new)
{
	char			*str;
	unsigned char	num;
	int				res;

	num = (unsigned char)va_arg(ap, unsigned int);
	str = ft_hh_octal_2(num);
	res = ft_uinteger_print(str, new);
	free(str);
	return (res);
}
