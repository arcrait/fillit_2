/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:13:29 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 13:13:29 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wc(const char *s, char c)
{
	size_t		i;
	int			j;

	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c)
				i++;
			j++;
		}
	}
	return (j);
}

static int		cc(const char *s, char c, int i)
{
	int			len;

	len = 0;
	while (s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void		ft_free(char **s, int i)
{
	int			it;

	it = 0;
	while (it < i)
	{
		ft_strdel(s + it);
		it++;
	}
	free(s);
	s = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	int			ind;
	int			letter;
	int			words;
	char		**s2;

	if (s == NULL)
		return (NULL);
	words = wc(s, c);
	ind = 0;
	letter = 0;
	if (!(s2 = (char**)ft_memalloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (ind < (words))
	{
		while (s[letter] == c)
			letter++;
		if (!(s2[ind] = ft_strsub(s, letter, cc(s, c, letter))))
		{
			ft_free(s2, ind);
			return (NULL);
		}
		letter = letter + cc(s, c, letter);
		ind++;
	}
	return (s2);
}
