/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 07:28:04 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/16 07:28:08 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
*#include <string.h>
*char	*ft_strcat(char *dest, char *src);
*
*int	main(void)
*{
*	char	dest1[10] = "aaa";
*	char	src[] = "bbb";
*	char	dest2[10] = "aaa";
*
*	printf("strcat:\t\t%s\n", strcat(dest1, src));
*	printf("ft_strcat:\t%s\n", ft_strcat(dest2, src));
*	return (0);
*}*/
/* call it:
*   gcc -Wall -Wextra -Werror ft_strcat.c && ./a.out   */
