/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_null_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:04:58 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 13:05:01 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_iprint_null_2(t_print *new, char *new_str)
{
	char	*dlc_str;
	int		num;

	if (!(new->flag_width))
	{
		ft_putstr(new_str);
		free(new_str);
		return (1);
	}
	else
	{
		dlc_str = check_flags_integer_width(new_str, new);
		ft_putstr(dlc_str);
		num = ft_strlen(dlc_str);
		free(dlc_str);
		return (num);
	}
}

int			ft_iprint_null(t_print *new)
{
	char	*new_str;

	new->flag_null = 0;
	if (!(new->flag_width) && !(new->flag_plus) && !(new->flag_space))
		return (0);
	if (new->flag_plus)
	{
		new_str = ft_strnew(1);
		new_str[0] = '+';
	}
	else
	{
		new_str = ft_strnew(1);
		new_str[0] = ' ';
	}
	return (ft_iprint_null_2(new, new_str));
}
