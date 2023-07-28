/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:08:21 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/20 14:20:50 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	pri("%d", ft_str_is_lowercase("ABCDEFGHIJKL"));
	pri("\n%d", ft_str_is_lowercase("abcdefgHhijkl"));
	pri("\n%d", ft_str_is_lowercase("abcdefghijkl"));
	pri("\n%d", ft_str_is_lowercase("1234567890"));
        pri("\n%d", ft_str_is_lowercase(""));

	return (0);
}*/
