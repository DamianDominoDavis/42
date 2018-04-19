/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:33:03 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/17 19:03:51 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *  If s2 points to a string with zero length, the function returns s1...?
 */
char	*ft_strstr(const char *haystack, const char *needle)
{
	while (*haystack) 
	{
		char *h = (char*)haystack;
		char *n = (char*)needle;
		while (*haystack && *n && *haystack == *n) 
		{
			haystack++;
			n++;
		}
		if (! *n)
			return h;
		haystack = h + 1;
	}
	return NULL;
}
