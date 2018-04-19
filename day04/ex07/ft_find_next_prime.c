/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 14:11:07 by cbrill            #+#    #+#             */
/*   Updated: 2018/03/18 14:18:02 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int n)
{
	int out;

	out = n + 1;
	while (! ft_isprime(n))
		n++;
	return n;
}

int	ft_isprime(int n)
{
	return (help(n, 2));
}

int	help(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3 || i * i > n)
		return (1);
	else
		return (help(n, i+1));
}
