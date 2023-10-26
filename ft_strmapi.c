/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahim@42KL | drmsr <me@drmsr.dev>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:20:05 by mrahim@42KL       #+#    #+#             */
/*   Updated: 2023/10/19 16:13:54 by mrahim@42KL      ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*output;

	if (s == 0 || f == 0)
		return (0);
	output = (char *) malloc(ft_strlen(s) + 1);
	if (output == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		output[i] = f(i, s[i]);
		i++;
	}
	output[i] = '\0';
	return (output);
}
