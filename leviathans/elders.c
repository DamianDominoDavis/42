/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elders.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 15:38:56 by cbrill            #+#    #+#             */
/*   Updated: 2018/03/18 19:08:31 by cbrill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(unsigned int secs)
{
	unsigned int retTime = time(0) + secs;   // Get finishing time.
	while (time(0) < retTime);               // Loop until it arrives.
}

float update(float old)
{
	float out = old;
	float r = rand() % 100000;
	if (r < 30000)							// 30% chance of -0~1%
		out -= out * ((float)rand() / RAND_MAX) * 0.01 / 400;
	else if (r > 60000)						// 40% chance of +0~1%
		out += out * ((float)rand() / RAND_MAX) * 0.01 / 400;
	if (out > 1100)							// at 1100, drop 20~30%
	{
		printf("\nDownward correction\n");
		out -= out * (0.2 + ((float)rand() / RAND_MAX) * 0.01);
	}
	return (out);
}

void	display(float price)
{
	int d = (int)price;
	while (d > 770)
	{
		d -= 5;
		printf("-");
	}
	printf("\n");
}

void	simulate(int timeout)
{
	int day = 0;
	float price = 1000;
	float oldprice = 0;
	char sign = ' ';
	while (day < timeout)
	{
		oldprice = price;
		price = update(price);
		sign = price > oldprice ? '+' : '-';
		printf("Y%d, S%d-%d:  %c%f  ", day / 400, (day / 100) % 4, day % 100, sign, price);
		display(price);
		delay(2);
		day++;
	}
}

void timecrash(int timeout)
{
	int day = 0;
	float price = 880;
	float oldprice = 1000;
	while(day < timeout)
	{
		oldprice = price;
		price = update(price);
		if (oldprice - price > 1)
		{
			printf("%d days to crash\n", day);
			break;
		}
		day++;
	}
}

void	statistically(float p)
{
	float price = p;
	int day = 0;
	while (price < 1100)
	{
		price += price * 0.5 * 0.01 / 400;
		printf("%d, %f\n", day, price);
		day++;
	}
	printf("%d", day);
}

int		main(void)
{
	simulate(1600000);
}
