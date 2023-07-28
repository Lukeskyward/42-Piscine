/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:21:01 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/21 15:53:00 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;

	i = 0;
	next = 1;
	while (str[i] != '\0')
	{
		if (next == 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		else if (next == 0 && str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		if ((str[i] >= 32 && str[i] <= 47)
			|| (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 123 && str[i] <= 126)
			|| (str[i] >= 91 && str[i] <= 96))
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str0[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char str1[] = "kjsdhf; aKLNFKD e-ef-e 32djsfhskdjfh";
	pri("%s", ft_strcapitalize(str0));
	pri("\n%s", ft_strcapitalize(str1));
	return (0);
}*/
