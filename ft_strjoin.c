/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:20:05 by mrahim@42KL       #+#    #+#             */
/*   Updated: 2023/10/18 19:30:26 by mrahim@42KL      ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	size_t	total_length;

	if (s1 == 0 || s2 == 0)
		return (0);
	total_length = ft_strlen(s1) + ft_strlen(s2);
	output = (char *) malloc (sizeof(char) * total_length + 1);
	if (output == 0)
		return (0);
	ft_strlcpy(output, s1, (ft_strlen(s1) + 1));
	ft_strlcat(output, s2, total_length + 1);
	return (output);
}
