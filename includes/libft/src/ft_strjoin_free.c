/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:11:57 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/05 13:11:57 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin_free(char *s1, char *s2, int flag1, int flag2)
{
	char		*str;

	if (!s1)
	{
		s1 = ft_strnew(0);
		flag1 = 1;
	}
	if (!s2)
	{
		s2 = ft_strnew(0);
		flag2 = 1;
	}
	str = ft_strjoin(s1, s2);
	if (flag1 == 1)
	{
		free(s1);
		s1 = NULL;
	}
	if (flag2 == 1)
	{
		free(s2);
		s2 = NULL;
	}
	return (str);
}
