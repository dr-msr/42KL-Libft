/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:19:47 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/17 10:19:49 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if ((((unsigned char *)s1)[i]) != ((unsigned char *)s2)[i])
			return ((((unsigned char *)s1)[i]) - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
