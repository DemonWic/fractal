/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:30:28 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:30:39 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	int				x;
	unsigned char	*str2;

	str2 = (unsigned char*)str;
	x = 0;
	while (len-- > 0)
		str2[x++] = 0;
}