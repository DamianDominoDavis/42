/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:37:20 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/21 16:28:48 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	long	len;
	char	*out;

	len = ft_strlen(str) + 1;
	out = (char*)malloc(sizeof(char*) * len);
	if (out == NULL)
		return (NULL);
	ft_memcpy(out, str, len);
	out[len - 1] = '\0';
	return (out);
}
