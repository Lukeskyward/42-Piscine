/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:11:02 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/27 19:12:05 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_lenstrs(int size, char **strs, char *sep)
{
	int	i;
	int	comp;

	i = 0;
	comp = 0;
	while (i < size)
	{
		comp += ft_str_len(strs[i]);
		i++;
	}
	comp += ft_str_len(sep) * (size - 1);
	return (comp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*temp;
	int		num1;

	num1 = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	str = (char *)malloc(sizeof(char) * (ft_lenstrs(size, strs, sep) + 1));
	if (!str)
		return (0);
	temp = str;
	while (num1 < size)
	{
		ft_strcpy(temp, strs[num1]);
		temp += ft_str_len(strs[num1]);
		if (num1 < size -1)
		{
			ft_strcpy(temp, sep);
			temp += ft_str_len(sep);
		}
		num1++;
	}
	*temp = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	size;
	char	*sep;
	char	**strs;
	char	*str;
	(void)argc;
	(void)argv;
	strs = (char**)malloc(sizeof(strs) * 5);
	strs[0] = "Chopin";
	strs[1] = "000";
	strs[2] = "Mahler";
	strs[3] = "2323";
	strs[4] = "Beethoven";
	sep = "+-+";
	size = 0;
	while (size < 6)
	{
		str = ft_strjoin(size, strs, sep);
		printf("%d: %s\n", size, str);
		free(str);
		size++;
	}
}*/
