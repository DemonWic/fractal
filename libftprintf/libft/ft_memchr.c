/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:37:52 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:37:54 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *str, int ch, size_t len)
{
	size_t			x;
	unsigned char	*str2;

	str2 = (unsigned char*)str;
	x = 0;
	while (x < len)
	{
		if (str2[x] == (unsigned char)ch)
			return ((void*)(str2 + x));
		x++;
	}
	return (NULL);
}
