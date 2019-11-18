/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:13:15 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 13:13:15 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		k;
	char		*str;

	str = (char *)s1;
	i = 0;
	if (!*s2)
		return (str);
	while (str[i] && i < len)
	{
		k = 0;
		while (s2[k] == str[i + k] && (i + k) < len)
		{
			if (!(s2[k + 1]))
				return (str + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
