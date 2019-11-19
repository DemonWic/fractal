/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:39:03 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:39:05 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			proverka(const char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	else if (s1 > s2)
		return (0);
	else
		return (s1 - s2);
}

void				*ft_memmove(void *dest, const void *src,
								size_t len)
{
	char			*dest2;
	const char		*src2;
	size_t			x;

	x = 0;
	dest2 = (char*)dest;
	src2 = (const char*)src;
	if (proverka(src2, dest2))
	{
		while (len)
		{
			dest2[len - 1] = src2[len - 1];
			len--;
		}
	}
	else
		while (x < len)
		{
			dest2[x] = src2[x];
			x++;
		}
	return (dest);
}
