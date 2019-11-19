/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analise_h_hh_unsigned_integer.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:56:12 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:56:15 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int						ft_hh_uinteger(va_list ap, t_print *new)
{
	unsigned char		num;
	char				*str;
	int					res;

	num = (unsigned char)va_arg(ap, unsigned int);
	str = ft_uinteger_2(num);
	res = ft_uinteger_print(str, new);
	free(str);
	return (res);
}

int						ft_h_uinteger(va_list ap, t_print *new)
{
	unsigned short int	num;
	char				*str;
	int					res;

	num = (unsigned short int)va_arg(ap, unsigned int);
	str = ft_uinteger_2(num);
	res = ft_uinteger_print(str, new);
	free(str);
	return (res);
}
