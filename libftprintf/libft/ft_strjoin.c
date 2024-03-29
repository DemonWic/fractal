/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:44:36 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:44:38 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	int		y;
	int		len_s1;
	int		len_s2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	y = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char*)malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (!str)
		return (NULL);
	x = 0;
	while (s1[x] != 0)
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[y] != 0)
		str[x++] = s2[y++];
	str[x] = 0;
	return (str);
}
