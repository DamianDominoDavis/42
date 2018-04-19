/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 13:54:30 by cbrill            #+#    #+#             */
/*   Updated: 2018/03/18 13:56:44 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int out;

	out 
	if (power == 0)
		return (1);
	else if (power == 1)
		return nb;
	else
		return (ft_recursive_power(nb, power - 1));
}
