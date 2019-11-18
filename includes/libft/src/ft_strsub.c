/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:13:38 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 13:13:38 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (i < len)
		*(str + i++) = *(s + start++);
	return (str);
}
