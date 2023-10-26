/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:38:30 by mrahim@42KL |     #+#    #+#             */
/*   Updated: 2023/10/17 11:38:32 by mrahim@42KL |    ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*mark;

	mark = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char) c)
			mark = (char *)&s[i];
		i++;
	}
	if (c == 0)
		mark = (char *)&s[i];
	return (mark);
}
