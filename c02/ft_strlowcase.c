/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 07:45:36 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 07:45:41 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
*char	*ft_strlowcase(char *str);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 2)
*	{
*		printf("was: \t\t%s\n", argv[1]);
*		printf("became: \t%s\n", ft_strlowcase(argv[1]));
*	}
*	return (0);
*}*/
/*call it:
*  gcc -Wall -Wextra -Werror ft_strlowcase.c && ./a.out AaZzDfeE34\#\@ */
