/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:53:41 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/17 12:53:43 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	mark;
	size_t	i;

	if (dst == 0)
		return (0);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	mark = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && ((mark + 1) < dstsize))
	{
		dst[mark] = src[i];
		mark++;
		i++;
	}
	dst[mark] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
