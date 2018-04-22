/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 16:14:22 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/21 16:24:37 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int i, char *))
{
	int lim;
	int k;

	if (str)
	{
		k = 0;
		lim = ft_strlen(str);
		while (k < lim)
		{
			(*f)(k, &str[k]);
			k++;
		}
	}
}
