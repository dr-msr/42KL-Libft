/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:15:10 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/18 19:17:44 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	if (s == 0)
		return (0);
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new_str = (char *) malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (0);
	i = (size_t) start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		new_str[j] = s[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
