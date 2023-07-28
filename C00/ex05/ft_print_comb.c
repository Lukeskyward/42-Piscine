/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:53:20 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/10 12:14:06 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	s[3];

	s[0] = '0';
	while (s[0] <= '7')
	{
		s[1] = s[0] + 1;
		while (s[1] <= '8')
		{
			s[2] = s[1] + 1;
			while (s[2] <= '9')
			{
				write(1, &s, 3);
				if (s[0] != '7')
					write(1, ", ", 2);
				else
					write(1, "\n", 1);
				s[2]++;
			}
			s[1]++;
		}
		s[0]++;
	}
}
