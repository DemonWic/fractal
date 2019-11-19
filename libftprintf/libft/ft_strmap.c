/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:45:33 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:45:35 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		x;
	char	*str;

	if (!s)
		return (NULL);
	str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	x = 0;
	while (s[x] != 0)
	{
		str[x] = f(s[x]);
		x++;
	}
	str[x] = 0;
	return (str);
}
