/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 05:46:22 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 05:46:26 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <string.h>
*#include <stdio.h>
*char	*ft_strncpy(char *dest, char *src, unsigned int n);
*
*int	main(int argc, char **argv)
*{
*	unsigned int	n;
*
*	n = 7;
*	if (argc == 3)
*	{
* //		strncpy(argv[1], argv[2], n);
* //		printf("strncpy: %s\n", argv[1]);
*		ft_strncpy(argv[1], argv[2], n);
*		printf("ft_strncpy: %s\n", argv[1]);
*	}
*	return (0);
*}*/
/* call it:
*   gcc -Wall -Wextra -Werror ft_strncpy.c && ./a.out desrrrrrrr srcsrcsrc   */
