/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 12:31:20 by cbrill            #+#    #+#             */
/*   Updated: 2018/03/17 14:03:02 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);
void	printrow(int width, char left, char mid, char right);

void	rush(int width, int height)
{
	int	k;

	if (width > 0 && height > 0)
	{
		k = 0;
		while (k < height)
		{
			if (k == 0)
				printrow(width, 'A', 'B', 'A');
			else if (k < height - 1)
				printrow(width, 'B', ' ', 'B');
			else
				printrow(width, 'C', 'B', 'C');
			k++;
		}
	}
}

void	printrow(int width, char left, char mid, char right)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
			ft_putchar(left);
		else if (i < width - 1)
			ft_putchar(mid);
		else
			ft_putchar(right);
		i++;
	}
	ft_putchar('\n');
}
