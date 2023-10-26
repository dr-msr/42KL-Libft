/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:11:03 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/17 13:11:04 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		++s1;
		++s2;
		++i;
	}
	if (i == n)
	{
		--s1;
		--s2;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
