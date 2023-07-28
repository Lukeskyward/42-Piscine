/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizz_buzz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:03:18 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/30 14:30:27 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_nbr(int	c)
{
	if (c >= 10)
	{
		put_nbr(c / 10);
		c = c % 10;
	}
	if (c < 10)
		ft_putchar(c + 48);
}

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else
			put_nbr(n);
		n++;
		write(1, "\n", 1);
	}
	return (0);
}
