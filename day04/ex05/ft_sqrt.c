/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 14:05:45 by cbrill            #+#    #+#             */
/*   Updated: 2018/03/18 14:10:35 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	return (help(1, try));
}

int	help(int try, int target)
{
	if (target / try == try)
		return (target);
	else if (target / try > try)
		return (-1);
	else return (help(try + 1, target));
}
