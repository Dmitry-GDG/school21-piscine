/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 05:10:58 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/15 05:11:02 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <string.h>
*#include <stdio.h>
*char	*ft_strcpy(char *dest, char *src);
*
*int	main(int argc, char **argv)
*{
*	if (argc == 3)
*	{
*		strcpy(argv[1], argv[2]);
*		printf("%s", argv[1]);
*		printf("%s", "\n");
*		ft_strcpy(argv[1], argv[2]);
*		printf("%s", argv[1]);
*		printf("%s", "\n");
*		return (0);
*	}
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_strcpy.c && ./a.out destdestdest srcsrc   */
