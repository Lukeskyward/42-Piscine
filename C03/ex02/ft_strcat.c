/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:25:12 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/23 12:50:59 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	destiny[18] = "cerveja gelada";
	char	source[] = " eh bao demais so!";
	printf("%s", destiny);
	printf("\n%s", source);
	printf("\n%s", ft_strcat(destiny, source));
	return (0);
}*/	
