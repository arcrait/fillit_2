/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:13:24 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 13:13:24 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrev(char *s)
{
	char		*str;
	size_t		i;
	size_t		len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len--);
	while (s)
	{
		str[i] = s[len];
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
