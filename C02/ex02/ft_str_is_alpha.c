/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:59:35 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/20 12:01:22 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	pri("%d", ft_str_is_alpha("abcdefghijkl"));
	pri("\n%d", ft_str_is_alpha("ab1defghijkl"));
	pri("\n%d", ft_str_is_alpha("-_123423253gfsfgs"));
	pri("\n%d", ft_str_is_alpha(""));
	return (0);
}*/
