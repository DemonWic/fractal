/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:04:45 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 13:04:48 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					ft_h_integer(va_list ap, t_print *new)
{
	short int		num;
	char			*str;

	num = (short int)va_arg(ap, int);
	if (num < 0)
		new->flag_otr_i = 1;
	ft_hobaflags(&*new);
	if (new->sobaka == 0 && new->flag_accuracy && new->accuracy == 0)
		return (ft_iprint_null(new));
	str = ft_itoa(num);
	return (ft_integer_print(str, new));
}

int					ft_l_integer(va_list ap, t_print *new)
{
	long int		num;
	char			*str;

	num = va_arg(ap, long int);
	if (num < 0)
		new->flag_otr_i = 1;
	ft_hobaflags(&*new);
	if (new->sobaka == 0 && new->flag_accuracy && new->accuracy == 0)
		return (ft_iprint_null(new));
	str = ft_litoa(num);
	return (ft_integer_print(str, new));
}

int					ft_ll_integer(va_list ap, t_print *new)
{
	long long int	num;
	char			*str;

	num = va_arg(ap, long long int);
	if (num < 0)
		new->flag_otr_i = 1;
	ft_hobaflags(&*new);
	if (new->sobaka == 0 && new->flag_accuracy && new->accuracy == 0)
		return (ft_iprint_null(new));
	str = ft_litoa(num);
	return (ft_integer_print(str, new));
}

int					ft_hh_integer(va_list ap, t_print *new)
{
	signed char		num;
	char			*str;

	num = (signed char)va_arg(ap, int);
	if (num < 0)
		new->flag_otr_i = 1;
	ft_hobaflags(&*new);
	if (new->sobaka == 0 && new->flag_accuracy && new->accuracy == 0)
		return (ft_iprint_null(new));
	str = ft_itoa(num);
	return (ft_integer_print(str, new));
}
