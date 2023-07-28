/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:50:28 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/20 18:00:09 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	pri("%d", ft_str_is_uppercase("ABCDEFGHIJKL"));
	pri("\n%d", ft_str_is_uppercase("abcdefgHhijkl"));
	pri("\n%d", ft_str_is_uppercase("abcdefghijkl"));
	pri("\n%d", ft_str_is_uppercase("1234567890"));
	pri("\n%d", ft_str_is_uppercase(""));
	return (0);
}*/
