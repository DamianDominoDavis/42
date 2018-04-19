/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:34:45 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/18 15:38:38 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *  can't use restrict, check for overlap?
 */
char	*ft_strncat(char *s1, const char *s2)
{
	char *out;

	*out = s1;
	while (*s1)
		s1++;
	while(!(*s1++ = *s2++))
			return (out);
	*s1 = 0;
	return (out);
}
