/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:39:07 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/17 17:49:54 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char tmp[len];
	{
		unsigned char *t = tmp;
		const char *s = src;
		while (len--)
			*t++ = *s++;
		char *d = dst;
		t = tmp;
		while (len--)
			*d++ = *t++;
	}
	return dst;
}
