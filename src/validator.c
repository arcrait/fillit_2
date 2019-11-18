/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkasandr <bkasandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:53:31 by bkasandr          #+#    #+#             */
/*   Updated: 2019/11/12 13:58:50 by bkasandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	char_count(char *buf)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < 19)
	{
		if (buf[i] && buf[i] != '\n' && buf[i] != '#' && buf[i] != '.')
			return (0);
		if (buf[i] == '\n' && ((i + 1) % 5) != 0)
			return (0);
		if (buf[i] == '#')
			count++;
		i++;
	}
	if (!buf[i] || buf[i] != '\n')
		return (0);
	return (count);
}

static int	link_counter(char *buf)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < 19)
	{
		if (buf[i] == '#')
		{
			if (i + 1 <= 18 && buf[i + 1] == '#')
				count++;
			if (i - 1 >= 0 && buf[i - 1] == '#')
				count++;
			if (i + 5 <= 18 && buf[i + 5] == '#')
				count++;
			if (i - 5 >= 0 && buf[i - 5] == '#')
				count++;
		}
		i++;
	}
	return (count);
}

int			valid(char *buf, int size)
{
	int i;

	i = 0;
	if (size < 20|| size > 546)
		return (0);
	while (i <= size)
	{
		if (char_count(buf + i) != 4)
			return (0);
		if (link_counter(buf + i) != 6 && link_counter(buf + i) != 8)
			return (0);
		i += 21;
	}
	return (size);
}
