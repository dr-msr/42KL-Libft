/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:35:02 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/17 12:35:04 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	dest = (char *) malloc(ft_strlen(s1) + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, ft_strlen(s1) + 1);
	return (dest);
}
