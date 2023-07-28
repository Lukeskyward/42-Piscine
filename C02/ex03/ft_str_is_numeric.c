/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:47:20 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/20 13:03:33 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	pri("%d", ft_str_is_numeric("123456789"));
	pri("\n%d", ft_str_is_numeric("abcdefg1hijkl"));
	pri("\n%d", ft_str_is_numeric("abcdefghijkl"));
	pri("\n%d", ft_str_is_numeric(""));
	return (0);
}*/
