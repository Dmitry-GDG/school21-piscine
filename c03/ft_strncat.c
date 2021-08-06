/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 08:48:40 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/16 08:48:46 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
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
*char	*ft_strncat(char *dest, char *src, unsigned int nb);
*
*int	main(void)
*{
*	char			dest1[10] = "aaa";
*	char			dest2[10] = "aaa";
*	char			src[] = "bbbbbbbbb";
*	unsigned int	nb;
*
*	nb = 6;
*	printf("strncat:\t%s\n", strncat(dest1, src, nb));
*	printf("ft_strncat:\t%s\n", ft_strncat(dest2, src, nb));
*	return (0);
*}*/
/* call it:
*  gcc -Wall -Wextra -Werror ft_strncat.c && ./a.out  */
