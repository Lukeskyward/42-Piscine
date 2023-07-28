/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:36:10 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/14 11:40:08 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_get_number(int i1, int i2, int i[])
{
	if (i1 >= 10)
	{
		i[0] = i1 / 10;
		i[1] = i1 -10 * i[0];
	}
	else
	{
		i[0] = 0;
		i[1] = i1;
	}
	if (i2 >= 10)
	{
		i[2] = i2 / 10;
		i[3] = i2 -10 * i[2];
	}
	else
	{
		i[2] = 0;
		i[3] = i2;
	}
}

void	ft_putchar_multi(int i1, int i2)
{
	int	i[4];

	ft_get_number(i1, i2, i);
	ft_putchar(i[0] + 48);
	ft_putchar(i[1] + 48);
	ft_putchar(' ');
	ft_putchar(i[2] + 48);
	ft_putchar(i[3] + 48);
	if (i1 != 98 || i2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (i1 <= 98)
	{
		i2 = i1 + 1;
		while (i2 <= 99)
		{
			ft_putchar_multi(i1, i2);
			i2++;
		}
		i1++;
	}
}
