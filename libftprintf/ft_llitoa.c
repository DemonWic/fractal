/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:03:16 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 13:03:18 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int			ft_otr(long long int n)
{
	int				otr;

	otr = 0;
	if (n < 0)
		otr = 1;
	return (otr);
}

int					ft_llpower(long long int n)
{
	int				power;

	power = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		power++;
		n = n / 10;
	}
	return (power);
}

char				*ft_llitoa(long long int n)
{
	int				power;
	char			*s;
	int				otr;
	long long int	nb;

	otr = ft_otr(n);
	nb = n;
	if (otr)
		nb = -nb;
	power = ft_llpower(nb) + otr;
	s = (char*)malloc(sizeof(char) * (power + 1));
	if (!s)
		return (NULL);
	s[power] = '\0';
	while (power + otr > 0)
	{
		s[power - 1] = (nb % 10) + '0';
		nb = nb / 10;
		power--;
	}
	if (otr)
		s[0] = '-';
	return (s);
}
