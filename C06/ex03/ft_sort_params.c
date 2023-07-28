/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:21:46 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/27 17:59:53 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
			write (1, &av[i][j], 1);
		write (1, "\n", 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (-s2[i]);
}

int	main(int ac, char **av)
{
	int	c;

	c = -1;
	if (ac < 2)
		return (0);
	while (av[++c + 1])
	{
		if (ft_strcmp(av[c], av[c + 1]) > 0)
		{
			av[0] = av[c + 1];
			av[c + 1] = av[c];
			av[c] = av[0];
			c = 0;
		}
	}
	print_params(av);
	return (0);
}
