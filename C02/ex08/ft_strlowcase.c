/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:07:08 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/21 14:16:01 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1[] = "a1b2c3d4efghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "ABCDEFGHI";

	pri("str1: %s\n", str1);
	pri("str2: %s\n", str2);
	pri("str3: %s\n", str3);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	pri("str1: %s\n", str1);
	pri("str2: %s\n", str2);
	pri("str3: %s\n", str3);
	return (0);
}*/
