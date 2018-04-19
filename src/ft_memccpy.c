/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:38:34 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/17 17:49:35 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char *d = dst;
	const char *s = src;
	while (n--)
	{
		if (*d == (unsigned char)c)
			return dst;
		*d++ = *s++;
	}
	return dst;
}
