/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 15:53:11 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/26 16:19:28 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*out;

	if (!(out = (t_list*)ft_memalloc(sizeof(t_list*))))
		return (NULL);
	out->content = ft_memalloc(content_size);
	ft_memcpy(out->content, content, content_size);
	out->next = NULL;
	return (out);
}
