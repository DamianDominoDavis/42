/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:37:20 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/18 15:30:32 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	long len;
	void *new;

	len = ft_strlen(s) + 1;
	*new = malloc(len);
	if (new == NULL)
		return (NULL);
	return ((char*)ft_memcpy(new, s, len));
}
