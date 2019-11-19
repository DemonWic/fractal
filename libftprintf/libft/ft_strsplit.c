/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:47:57 by ahintz            #+#    #+#             */
/*   Updated: 2019/11/19 12:48:00 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countword(char const *s, char c)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static size_t	ft_lenword(const char *s, char c)
{
	int			i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static void		ft_free(char **new, int i)
{
	while (--i >= 0)
	{
		free(new[i]);
		new[i] = NULL;
	}
	free(new);
}

char			**ft_strsplit(char const *s, char c, int *value)
{
	char		**new;
	int			word;
	int			i;

	i = 0;
	if (!s || !c)
		return (0);
	word = ft_countword(s, c);
	if (!(new = (char**)malloc(sizeof(char *) * (word))))
		return (0);
	*value = word - 1;
	while (s && i < word)
	{
		while (*s == c)
			s++;
		if (!(new[i] = ft_strsub(s, 0, ft_lenword((char *)s, c))))
			ft_free(new, i);
		i++;
		s += (int)ft_lenword((char *)s, c);
	}
	return (new);
}
