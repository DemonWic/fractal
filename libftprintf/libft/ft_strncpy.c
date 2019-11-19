/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:46:32 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:46:35 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	x;

	x = 0;
	while (x < len && src[x] != '\0')
	{
		dst[x] = src[x];
		x++;
	}
	while (x < len)
	{
		dst[x] = 0;
		x++;
	}
	return (dst);
}
