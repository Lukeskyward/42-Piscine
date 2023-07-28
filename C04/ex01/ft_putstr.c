/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:53:21 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/23 18:10:04 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	tmp;

	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		write(1, &tmp, 1);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "hello world!";
	
	printf("%s\n", str);
	ft_putstr(str);
	return (0);
}*/
