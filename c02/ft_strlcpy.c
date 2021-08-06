/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 08:28:08 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 08:28:11 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (src[j])
		j++;
	if (!dest || !src)
		return (0);
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

/*#include <string.h>
*#include <stdio.h>
*unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
*
*int	main(int argc, char **argv)
*{
*	unsigned int	size;
*	unsigned int	size_n;
*
*	size = 6;
*	if (argc == 3)
*	{
*		printf("was:\t%s\n", argv[1]);
*		size_n = ft_strlcpy(argv[1], argv[2], size);
*		printf("size_n:\t%d\n", size_n);
*		printf("become:\t%s\n", argv[1]);
*	}
*	return (0);
*}*/
/* call it:
*  gcc -Wall -Wextra -Werror ft_strlcpy.c && ./a.out aaa ddddddddddd  */
