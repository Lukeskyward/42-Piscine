/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft+strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 14:37:58 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/19 15:00:32 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char d[] = "I was already here!";
	char s[] = "I am ready to move!";

	//I am readyady here!
	pri("%s\n", ft_strncpy(d, s, 10));
}*/
