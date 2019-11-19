/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:37:02 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:37:04 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*xcom;

	if (!(xcom = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	else if (content == NULL)
	{
		xcom->content = NULL;
		xcom->content_size = 0;
	}
	else
	{
		xcom->content = (char*)content;
		xcom->content_size = content_size;
	}
	xcom->next = NULL;
	return (xcom);
}
