/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:08:56 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 13:08:56 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t		i;
	char		*str1;
	char		*str2;

	if (!s1 && !s2)
		return (1);
	else if (!s1 || !s2)
		return (0);
	else
	{
		i = 0;
		str1 = (char *)s1;
		str2 = (char *)s2;
		while (str1[i] == str2[i])
		{
			if (!(str1[i + 1]) && !(str2[i + 1]))
				return (1);
			i++;
		}
	}
	return (0);
}
