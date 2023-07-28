/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:59:03 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/22 16:01:54 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 && str[i] < 126)
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[str[i] / 16], 1);
			write(1, &"0123456789abcdef"[str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
	i++;
	}
}
/*
int	main(void)
{
    char str[] = "Ola\nesta bem?";

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/
