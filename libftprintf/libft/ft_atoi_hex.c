/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:30:12 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:30:15 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			char_to_hex(char c)
{
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (0);
}

int			ft_atoi_hex(const char *str)
{
	int		neg;
	int		nb;

	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	neg = (*str == '-' ? 1 : 0);
	if (*str == '-' || *str == '+')
		str++;
	while ((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'F')
		|| (*str >= 'a' && *str <= 'f'))
	{
		nb *= 16;
		nb += char_to_hex(*str);
		str++;
	}
	return (neg ? -nb : nb);
}
