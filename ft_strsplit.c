/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 16:51:26 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/22 18:14:17 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordlen(char const *str, char c)
{
	int		i;

	i = 0;
	while (*str == c)
		str++;
	while (*str != c && *str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int		ft_wordcount(char const *str, char c)
{
	int		i;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str != '\0')
			i++;
		while (*str != c && *str != '\0')
			str++;
	}
	return (i);
}

char	**ft_strsplit(char const *str, char c)
{
	char	**out;
	int		oi;
	int		si;
	int		wi;

	if (!str)
		return (NULL);
	out = (char**)malloc(sizeof(*out) * (ft_wordcount(str, c) + 1));
	if (!out)
		return (NULL);
	oi = 0;
	si = 0;
	while (oi < ft_wordcount(str, c))
	{
		wi = 0;
		if (!(out[oi] = ft_strnew(ft_wordlen(&str[si], c) + 1)))
			out[oi] = NULL;
		while (str[si] == c)
			si++;
		while (str[si] != c && str[si])
			out[oi][wi++] = str[si++];
		out[oi++][wi] = '\0';
	}
	out[oi] = 0;
	return (out);
}
