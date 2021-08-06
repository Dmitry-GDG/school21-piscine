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

int	my_len_strs(int size, char **strs, char *sep)
{
	int		len_strs;
	int		i;

	len_strs = 0;
	i = 0;
	while (i < size)
	{
		len_strs += ft_strlen(strs[i]);
		i++;
	}
	len_strs += (ft_strlen(sep) * (size - 1) + 1);
	return (len_strs);
}

void	my_fill_array(char *outp, int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		m;

	i = 0;
	while (i < my_len_strs(size, strs, sep) - 1)
	{
		j = 0;
		while (j < size)
		{
			k = 0;
			while (strs[j][k] != '\0')
				outp[i++] = strs[j][k++];
			if (strs[j][k] == '\0' && i != my_len_strs(size, strs, sep) - 1)
			{
				m = 0;
				while (sep[m] != '\0')
					outp[i++] = sep[m++];
			}
			j++;
		}
		i++;
	}
	outp[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_strs;
	char	*outp;

	len_strs = my_len_strs(size, strs, sep);
	outp = malloc(sizeof(char) * len_strs);
	if (outp == (void *)0)
		return ((void *)0);
	my_fill_array(outp, size, strs, sep);
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
*gcc -Wall -Wextra -Werror ft_strjoin_not_norma.c && ./a.out aa bb cc dd ee*/
