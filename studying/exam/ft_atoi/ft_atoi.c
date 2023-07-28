/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:31:02 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/29 14:49:27 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int result;
	int signal;

	result = 0;
	signal = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = -1 * signal;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (signal * result);
}

int main()
{
	printf("ft_atoi: %d\t", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
	printf("ft_atoi: %d\t", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\t", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\t", ft_atoi("+42 BLAH!"));
	printf("atoi: %d\n", atoi("+42 BLAH!"));
	printf("ft_atoi: %d\t", ft_atoi("  -42"));
	printf("atoi: %d\n", atoi("  -42"));
	printf("ft_atoi: %d\t", ft_atoi("     +42"));
	printf("atoi: %d\n", atoi("     +42"));
	printf("ft_atoi: %d\t", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
	printf("ft_atoi: %d\t", ft_atoi("5"));
	printf("atoi: %d\n", atoi("5"));
	printf("atoi: %d\n", atoi("--123456"));

	return 0;
}
