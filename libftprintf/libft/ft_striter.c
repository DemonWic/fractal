/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:44:11 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:44:14 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *s, void (*f)(char*))
{
	if (!s)
		return ;
	while (*s)
	{
		f(s);
		s++;
	}
}