/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:33:36 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/18 15:44:21 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If s2 points to a string with zero length, the function returns s1...?
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	while (*haystack && len--) 
	{
		char *h;
		char *n;

		h = (char*)haystack;
		n = (char*)needle;
		while (*haystack && *n && *haystack == *n) 
		{
			haystack++;
			n++;
		}
		if (!*n)
			return ((char *)h);
		haystack = h + 1;
	}
	return (NULL);
}
