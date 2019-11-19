/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:36:40 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:36:43 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*xcom;

	xcom = NULL;
	if (!lst)
		return (NULL);
	if (lst)
	{
		xcom = ft_lstnew(lst->content, lst->content_size);
		xcom = f(xcom);
		if (lst->next == NULL)
		{
			xcom->next = NULL;
			return (xcom);
		}
	}
	if (xcom && lst->next)
		xcom->next = ft_lstmap(lst->next, f);
	return (xcom);
}
