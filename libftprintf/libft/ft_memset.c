/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:39:14 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:39:16 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t len)
{
	unsigned char	*massive;
	size_t			x;

	massive = (unsigned char*)str;
	x = 0;
	while (x < len)
		massive[x++] = ch;
	return (str);
}
