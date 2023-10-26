/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:26:03 by mrahim@42KL       #+#    #+#             */
/*   Updated: 2023/10/16 19:15:51 by mrahim@42KL      ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

/*  Protected Calloc. */
/*  If need to remove protection, simply take out the */
/*  overflow and checkers before ptr initialization. */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	int			overflow;

	if ((int) count == INT_MIN || (int) size == INT_MIN)
		return (NULL);
	overflow = count * size;
	if (overflow == 0)
		return (malloc(0));
	if (overflow / count != size)
		return (NULL);
	ptr = (void *) malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return ((void *)ptr);
}
