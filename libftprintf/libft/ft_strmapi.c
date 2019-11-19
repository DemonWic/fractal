/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:45:49 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:45:51 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	int				x;
	char			*str;

	if (!s)
		return (NULL);
	str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	x = 0;
	while (s[x] != 0)
	{
		n = x;
		str[x] = f(n, s[x]);
		x++;
	}
	str[x] = 0;
	return (str);
}
