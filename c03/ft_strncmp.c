/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 06:59:27 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/16 06:59:30 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < (n - 1) && s1[i] != '\n' && s2[i] != '\n')
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
*#include <string.h>
*int	ft_strncmp(char *s1, char *s2, unsigned int n);
*
*int	main(int argc, char **argv)
*{
*	int	i;
*
*	i = 7;
*	if (argc == 3)
*	{
*		printf ("strncmp:\t%d\n", strncmp(argv[1], argv[2], i));
*		printf ("ft_strncmp:\t%d\n", ft_strncmp(argv[1], argv[2], i));
*	}
*	return (0);
*}*/
/*call it:
*  gcc -Wall -Wextra -Werror ft_strncmp.c && ./a.out "Coucou1" "Coucou" */
