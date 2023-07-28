/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:06:49 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/12 15:07:01 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	subtract_middle(int x, int y, int height, int width)
{
	if (height == 0 || height == y - 1)
	{
		ft_putchar('*');
	}
	else if (width == 0 || width == x - 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	draw_square(int x, int y, int height, int width)
{
	if (height == 0 && width == 0)
	{
		ft_putchar('/');
	}
	else if (height == 0 && width == x - 1)
	{
		ft_putchar('\\');
	}
	else if (height == y - 1 && width == 0)
	{
		ft_putchar('\\');
	}
	else if (height == y - 1 && width == x - 1)
	{
		ft_putchar('/');
	}
	else
	{
		subtract_middle(x, y, height, width);
	}
}

void	rush(int x, int y)
{
	int	height;
	int	width;

	height = 0;
	width = 0;
	if (x < 0 || y < 0)
	{
		write(1, "rush parameters must be positive numbers.\n", 42);
		return ;
	}
	while (height <= y - 1)
	{
		width = 0;
		while (width <= x -1)
		{
			draw_square(x, y, height, width);
		width++;
		}
		ft_putchar('\n');
	height++;
	}
}
