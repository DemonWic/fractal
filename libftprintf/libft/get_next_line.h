/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:50:41 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:50:47 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define MALLOCCHECKER(x) if (!x) return (-1);

typedef struct		s_gnl
{
	char			*content;
	size_t			content_size;
	int				content_fd;
	size_t			content_i;
	struct s_gnl	*next;
}					t_gnl;
int					get_next_line(const int fd, char **line);

#endif
