/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 07:49:29 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 07:49:33 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while ((str[i] < '0') || ((str[i] > '9') && (str[i] < 'A')) \
		|| ((str[i] > 'Z') && (str[i] < 'a')) || (str[i] > 'z'))
			i++;
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 32;
			i++;
		}
		while (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') \
		&& (str[i] <= 'z')) || ((str[i] >= '0') && (str[i] <= '9')))
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] += 32;
			i++;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
*char	*ft_strcapitalize(char *str);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 2)
*		printf("%s\n", ft_strcapitalize(argv[1]));
*	return (0);
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_strcapitalize.c && ./a.out "salut, comment tu 
* vas ? 42mots quarante-deux; cinquante+et+un" */
