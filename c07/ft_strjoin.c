/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:49:49 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/20 11:49:52 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_strs;
	int		i;
	char	*outp;

	len_strs = 0;
	i = 0;
	while (i < size)
	{
		len_strs += ft_strlen(strs[i]);
		i++;
	}
	len_strs += (ft_strlen(sep) * (size - 1) + 1);
	outp = (char *)malloc(sizeof(char) * len_strs);
	if (outp == (void *)0)
		return ((void *)0);
	i = 0;
	while (i < size)
	{
		ft_strcat(outp, strs[i]);
		if (i < size - 1)
			ft_strcat(outp, sep);
		i++;
	}
	outp[len_strs - 1] = '\0';
	return (outp);
}

/*#include <stdio.h>
*char	*ft_strjoin(int size, char **strs, char *sep);
*
*int	main(int argc, char **argv)
*{
*	char	*outp;
*	
*	if (argc > 2)
*	{
*		outp = ft_strjoin(argc - 1, argv + 1, "¯\\_(ツ)_/¯");
*		printf("%s\n", outp);
*		printf("address %p\n", &outp);
*		free(outp);
*	}
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_strjoin.c && ./a.out aaa bbb ccc ddd eee */
