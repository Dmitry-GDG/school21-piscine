/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:55:12 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/19 21:55:15 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len_str;
	char	*outp;

	len_str = 0;
	while (src[len_str])
		len_str++;
	outp = malloc(sizeof(char) * len_str + 1);
	if (outp == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		outp[i] = src[i];
		i++;
	}
	outp[i] = '\0';
	return (outp);
}

/*#include <stdio.h>
*char	*ft_strdup(char *src);
*
*int	main(int argc, char **argv)
*{
*	char	*outp;
*
*	if (argc == 2)
*	{
*		outp = ft_strdup(argv[1]);
*		printf("%s\n", outp);
*	}
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_strdup.c  && ./a.out 21school */
