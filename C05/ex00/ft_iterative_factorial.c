/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:36:34 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/25 17:37:37 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (i);
}
/*
int	main(void)
{
	printf("%i\n", ft_interative_factorial(9));
}*/
