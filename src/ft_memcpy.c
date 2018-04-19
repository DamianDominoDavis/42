/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:38:09 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/18 15:23:48 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Can't use the keyword restrict -- check for overlap?
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char				*d;
	const unsigned char	*s;

	*d = dst;
	*s = src;
	while (n--)
		*d++ = *s++;
	return ((unsigned char*)dst);
}
