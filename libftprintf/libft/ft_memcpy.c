/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:38:30 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:38:32 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	x;
	unsigned char	*dest2;
	unsigned char	*src2;

	x = 0;
	dest2 = (unsigned char*)dest;
	src2 = (unsigned char*)src;
	while (n > 0)
	{
		dest2[x] = src2[x];
		n--;
		x++;
	}
	return (dest2);
}
