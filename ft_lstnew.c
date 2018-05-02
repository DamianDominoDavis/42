/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 16:14:02 by cbrill            #+#    #+#             */
/*   Updated: 2018/05/01 18:55:08 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**try sizeof(t_list*)
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*out;

	if (!(out = (t_list*)malloc(sizeof(*out))))
		return (NULL);
	if (!content)
	{
		out->content = NULL;
		out->content_size = 0;
	}
	else
	{
		if (!((out->content = malloc(content_size))))
			return (NULL);
		ft_memcpy(out->content, content, content_size);
		out->content_size = content_size;
	}
	out->next = NULL;
	return (out);
}
