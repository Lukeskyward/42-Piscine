/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:08:58 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/27 19:10:13 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min - 1;
	buffer = malloc(bound * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index <= bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound + 1);
}
/*
void debug_dump_array(int numbers[], int size)
{
    int index;

    printf("[ ");
    index = 0;
    while (index < size)
    {
        printf("%d", numbers[index]);
        if (index != size - 1)
        {
            printf(", ");
        }
        index++;
    }
    printf(" ]");
}
int main(void)
{
    int min;
    int max;
    int *range;
    int bound;

    min = 5;
    max = 10;
    bound = ft_ultimate_range(&range, min, max);
    printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
    fflush(stdout);
    debug_dump_array(range, bound + 2);
}*/
