/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <cbrill@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 14:32:06 by cbrill            #+#    #+#             */
/*   Updated: 2018/04/24 15:01:10 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** How to protect against overflow without <limits.h> -> INT_MAX | INT_MIN ?
*/

int		ft_atoi(const char *str)
{
	long	out;
	long	sign;
	long	max = 9223372036854775807;
	long	min = -9223372036854775808;

	out = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;
	if (*str == '\0')
		return ((int)(sign * 0));
	while (*str && *str >= '0' && *str <= '9')
	{
		if (max/10 < out)
			return (sign == -1) ? (int)min : (int)max;
		out *= 10;
		if (max - (*str - '0') < out)
			return (sign == -1) ? (int)min : (int)max;
		out += *str++ - '0';
	}
	return ((int)(out * sign));
}
