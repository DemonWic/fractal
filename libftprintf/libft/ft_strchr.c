/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:42:36 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:42:39 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	ch;
	int		x;
	int		len;

	len = ft_strlen(str);
	ch = c;
	x = 0;
	while (x <= len)
	{
		if (str[x] == ch)
			return ((char *)(str + x));
		x++;
	}
	return (NULL);
}
