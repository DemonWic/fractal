/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:38:13 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:38:15 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t len)
{
	int				x;
	unsigned char	*one_str;
	unsigned char	*two_str;

	one_str = (unsigned char*)str1;
	two_str = (unsigned char*)str2;
	x = 0;
	while ((x <= ft_strlen(str1) + 1 || x <= ft_strlen(str2)) + 1 && len > 0)
	{
		if (one_str[x] != two_str[x])
			return (one_str[x] - two_str[x]);
		x++;
		len--;
	}
	return (0);
}
