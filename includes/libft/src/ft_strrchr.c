/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:13:19 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 13:13:19 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	symb;
	size_t			len;

	len = ft_strlen(s);
	symb = (unsigned char)c;
	while (len > 0 && s[len] != symb)
		len--;
	if (s[len] == symb)
		return ((char *)&s[len]);
	else
		return (NULL);
}
