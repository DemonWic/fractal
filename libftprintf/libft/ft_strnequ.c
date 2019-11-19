/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:46:45 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:46:47 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int x;

	if (!s1 || !s2)
		return (0);
	x = 0;
	while ((s1[x] != 0 || s2[x] != 0) && n > 0)
	{
		if (s1[x] - s2[x] != 0)
			return (0);
		x++;
		n--;
	}
	return (1);
}
