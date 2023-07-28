/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:57:00 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/23 13:15:41 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					d;
	unsigned int		s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0' && (s < nb))
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
	char	dest[14] = "this is";
	char	src[] = "BRAZIL!";

	printf("%s", dest);
	printf("\n%s", src);
	printf("\n%s", ft_strncat(dest, src, 14));
	return (0);
}*/
