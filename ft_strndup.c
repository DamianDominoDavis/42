/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:07:10 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/24 13:13:04 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char	*out;

	out = ft_strnew(n);
	if (!out)
		return (NULL);
	out = ft_strncpy(out, str, n);
	out[n] = '\0';
	return (out);
}
