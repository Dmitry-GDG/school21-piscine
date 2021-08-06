/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:49:18 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/16 10:49:23 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	success;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		success = 0;
		if (str[i] == to_find[j])
		{
			success = i;
			while (str[i] && to_find[j] && str[i] == to_find[j])
			{
				i++;
				j++;
				if (!to_find[j])
					return (&str[success]);
			}
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
*#include <string.h>
*char	*ft_strstr(char *str, char *to_find);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 3)
*	{
*		printf("strstr:\t\t%s\n", strstr(argv[1], argv[2]));
*		printf("ft_strstr:\t%s\n", ft_strstr(argv[1], argv[2]));
*	}
*	return (0);
*}*/
/*call it:
*gcc -Wall -Wextra -Werror ft_strstr.c && ./a.out "Coucouffggtt" "couf"  */
