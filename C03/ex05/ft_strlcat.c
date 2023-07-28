/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:33:29 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/23 15:53:49 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	d = ft_strlen(dest);
	s = 0;
	while (src[s] != '\0' && d + 1 < size)
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[s]));
}
/*
int	main(void)
{
	char			dest[50] = "ground control ";
	char			src[50] = "to major Tom";
	unsigned int	size;

	size = 28;
//	printf("%d\n", strlcat(dest, src, size));
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
}*/
