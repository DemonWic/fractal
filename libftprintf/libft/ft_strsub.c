/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:48:25 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:48:28 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		x;
	int		size;
	char	*s2;

	if (!s)
		return (NULL);
	x = 0;
	size = len;
	s2 = (char*)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	while (s[start] != 0 && size > 0)
	{
		s2[x] = s[start];
		start++;
		size--;
		x++;
	}
	s2[x] = 0;
	if (size == 0 || s[start] != 0)
	{
		return (s2);
	}
	return (NULL);
}
