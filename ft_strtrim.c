/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:20:05 by mrahim@42KL       #+#    #+#             */
/*   Updated: 2023/10/18 20:41:32 by mrahim@42KL      ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;

	if (s1 == 0 || set == 0)
		return (0);
	begin = 0;
	while (s1[begin] != 0 && ft_strchr(set, s1[begin]))
	{
		begin++;
	}
	end = ft_strlen(s1);
	while (begin < end && ft_strchr(set, s1[end]))
	{
		end--;
	}
	return (ft_substr(s1, begin, (end - begin + 1)));
}
