/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 22:16:23 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 22:16:26 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
*#include <string.h>
*int	ft_strcmp(char *s1, char *s2);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 3)
*	{
*		printf("strcmp:\t\t%d\n", strcmp(argv[1], argv[2]));
*		printf("ft_strcmp:\t%d\n", ft_strcmp(argv[1], argv[2]));
*	}
*	return (0);
*}*/
/* call it:
*  gcc -Wall -Wextra -Werror ft_strcmp.c && ./a.out "Liev" "Lievs"  */
