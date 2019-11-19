/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analise_procent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:59:17 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:59:20 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_analise_procent(t_print *new)
{
	char	*str;
	char	*new_str;

	if (new->width > 0)
	{
		str = ft_strnew(new->width);
		ft_memset(str, ' ', new->width);
		str[new->width - 1] = '%';
		new_str = ft_check_char_flag_minus('%', str, new);
		ft_putstr(new_str);
		free(new_str);
		return (new->width);
	}
	ft_putstr("%");
	return (1);
}
