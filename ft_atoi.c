/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:32:06 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/21 16:55:23 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** How to protect against overflow without <limits.h> -> INT_MAX | INT_MIN ?
*/

int		ft_atoi(const char *str)
{
	int		n;
	int		sign;

	n = 0;
	while (*str != '\0' && (
		*str == ' '
		|| *str == '\n'
		|| *str == '\t'
		|| *str == '\v'
		|| *str == '\f'
		|| *str == '\r'))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	return (sign * n);
}
