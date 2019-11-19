/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:35:24 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:35:27 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_otr(int n)
{
	int		otr;

	otr = 0;
	if (n < 0)
		otr = 1;
	return (otr);
}

static int	ft_power(int n)
{
	int		power;

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

char		*ft_itoa(int n)
{
	int		power;
	char	*s;
	int		otr;
	long	nb;

	otr = ft_otr(n);
	nb = n;
	if (otr)
		nb = -nb;
	power = ft_power(nb) + otr;
	s = (char*)malloc(sizeof(char) * (power + 1));
	if (!s)
		return (NULL);
	s[power] = '\0';
	while (power > 0)
	{
		s[power - 1] = (nb % 10) + '0';
		nb = nb / 10;
		power--;
	}
	if (otr)
		s[0] = '-';
	return (s);
}
