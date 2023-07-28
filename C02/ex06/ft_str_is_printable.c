/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:04:04 by lucasda-          #+#    #+#             */
/*   Updated: 2023/03/22 16:01:04 by lucasda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	pri("%d", ft_str_is_printable("ABCDEFGHIJKL"));
	pri("\n%d", ft_str_is_printable("\t"));
	pri("\n%d", ft_str_is_printable("00010011"));
	pri("\n%d", ft_str_is_printable("1234567890"));
	pri("\n%d", ft_str_is_printable(""));
	return (0);
}*/
