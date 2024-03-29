/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:37:39 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:37:42 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	x;
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char*)dest;
	src2 = (unsigned char*)src;
	x = 0;
	while (n > 0)
	{
		if (src2[x] == (unsigned char)c)
		{
			dest2[x] = src2[x];
			return (dest + ++x);
		}
		dest2[x] = src2[x];
		x++;
		n--;
	}
	return (NULL);
}
