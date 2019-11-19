/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:45:08 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:45:11 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t x;
	size_t len_dest;

	x = 0;
	len_dest = 0;
	while (dest[x] != '\0' && x < size)
		x++;
	len_dest = x;
	if (x == size)
		return (len_dest + ft_strlen(src));
	while ((x < size - 1) && src[x - len_dest] != '\0')
	{
		dest[x] = (char)src[x - len_dest];
		x++;
	}
	dest[x] = '\0';
	return (len_dest + ft_strlen(src));
}
