/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:39:39 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:39:45 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_power2(int nb, int notation)
{
	int	res;

	res = 0;
	if (nb < 0)
	{
		res++;
		nb *= -1;
	}
	if (!nb)
		return (1);
	while (nb)
	{
		nb = nb / notation;
		res++;
	}
	return (res);
}
