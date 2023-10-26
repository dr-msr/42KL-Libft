/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:56:57 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/19 15:55:00 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char separator)
{
	if (c == separator)
		return (1);
	return (0);
}

static int	array_count(const char *str, char separator)
{
	int	part;
	int	count;
	int	i;

	part = 1;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_check(str[i], separator) == 0) && (part == 1))
		{
			count++;
			part = 0;
		}
		else if ((ft_check(str[i], separator)) == 1)
			part = 1;
		i++;
	}
	return (count);
}

static char	*ft_map_array(const char *src, char separator)
{
	char	*array;
	char	*buffer;
	int		length;

	length = 0;
	buffer = (char *) src;
	while (*buffer && !ft_check(*buffer++, separator))
		length++;
	array = (char *) malloc(sizeof(*src) * length + 1);
	if (array == 0)
		return (0);
	buffer = array;
	while (*src && length-- > 0)
		*buffer++ = *src++;
	*buffer = '\0';
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	**tmp;
	int		part;

	if (s == 0)
		return (0);
	array = (char **) malloc((array_count(s, c) + 1) * sizeof(char *));
	if (array == 0)
		return (0);
	tmp = array;
	part = 1;
	while (*s)
	{
		if (ft_check(*s, c) == 0 && part != 0)
		{
			part = 0;
			*tmp = ft_map_array(s, c);
			tmp++;
		}
		else if (ft_check(*s, c) != 0)
			part = 1;
		s++;
	}
	*tmp = 0;
	return (array);
}
