/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:47:45 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:47:48 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	int		len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char*)(str + len));
		len--;
	}
	return (NULL);
}
