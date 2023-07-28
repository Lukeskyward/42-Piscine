/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:15:51 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/20 18:35:08 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
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
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	pri("str1: %s\n", str1);
	pri("str2: %s\n", str2);
	pri("str3: %s\n", str3);
	return (0);
}*/
