/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:43:43 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:43:45 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!str)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}
