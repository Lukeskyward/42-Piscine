/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:55:15 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/22 16:01:29 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[size - 1] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	str1[] = "hello world";
	char	str2[] = "rains of castamere";

	printf("%s", str1);
	printf("\n%s", str2);
	printf("\n%d", ft_strlcpy(str2, str1, 19));
	return (0);
}*/
