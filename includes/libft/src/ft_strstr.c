/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:13:34 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 13:13:34 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		i;
	size_t		k;
	char		*str;

	str = (char *)s1;
	i = 0;
	if (!*s2)
		return (str);
	while (str[i])
	{
		k = 0;
		while (s2[k] == str[i + k])
		{
			if (!(s2[k + 1]))
				return (str + i);
			k++;
		}
		i++;
	}
	return (NULL);
}
