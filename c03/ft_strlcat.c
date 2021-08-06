/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 15:44:56 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/16 15:45:00 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_outp;
	unsigned int	len_outp2;

	i = 0;
	while (dest[i])
		i++;
	len_outp = i;
	len_outp2 = 0;
	while (src[len_outp2])
		len_outp2++;
	len_outp2 += len_outp;
	j = 0;
	while (src[j] && j < size - len_outp - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_outp2);
}

/*#include <stdio.h>
*#include <string.h>
*unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
*
*int	main(void)
*{
*	unsigned int	i;
*	char			dest1[20] = "aaa";
*	char			dest2[20] = "ccc";
*	char			src[] = "bbbbbbbbbbbb";
*
*	i = 10;
*	printf("strlcat:\t%lu\n", strlcat(dest1, src, i));
*	printf("ft_strlcat:\t%u\n", ft_strlcat(dest2, src, i));
*	printf("strlcat:\t%s\n", dest1);
*	printf("ft_strlcat:\t%s\n", dest2);
*	return (0);
*}*/
/*call it:
*gcc -Wall -Wextra -Werror ft_strlcat.c && ./a.out   */
