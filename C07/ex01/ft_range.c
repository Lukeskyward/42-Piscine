/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:49:13 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/27 18:51:56 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*buffer;
	int	*ptr;

	if (min >= max)
		return (ptr = NULL);
	range = max - min;
	buffer = malloc(range * sizeof(int));
	if (!buffer)
		return (0);
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}
/*
int		main(void)
{
	int	*res;
	int	offset;

	offset = 0;
	res = ft_range(0, 9);
	while (offset < 9)
	{
		printf("%d ", res[offset]);
		offset++;
	}
	printf("\n");
	if (res[offset] == res[offset - 1])
		printf(" > KO, max number included in array.\n");

	int *arr1;
	int *arr2;
	int *arr3;
	int *arr4;
	int *arr5;
	int *arr6;

	arr1 = ft_range(1, 1);
	arr2 = ft_range(-1, 2);
	arr3 = ft_range(-3, -1);
	arr4 = ft_range(-2, -3);
	arr5 = ft_range(0, 10);
	arr6 = ft_range(-2, 0);

	offset = 0;
	while (offset < 1)
	{
		printf("%d ", arr1[offset]);
		offset++;
	}
	printf("| min %d ", 1);
	printf("| max %d", 2);
	printf("\n");
	offset = 0;
	while (offset < 3)
	{
		printf("%d ", arr2[offset]);
		offset++;
	}
	printf("| min %d ", -1);
	printf("| max %d", 2);
	printf("\n");
	offset = 0;
	while (offset < 2)
	{
		printf("%d ", arr3[offset]);
		offset++;
	}
	printf("| min %d ", -3);
	printf("| max %d", -1);
	printf("\n");
	offset = 0;
	while (offset < 10)
	{
		printf("%d ", arr5[offset]);
		offset++;
	}
	printf("| min %d ", 0);
	printf("| max %d", 10);
	printf("\n");
	offset = 0;
	while (offset < 2)
	{
		printf("%d ", arr6[offset]);
		offset++;
	}
	printf("| min %d ", -2);
	printf("| max %d", 0);
	return (0);
}*/
