/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 11:30:33 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/23 11:30:36 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str++)
		size++;
	return (size);
}

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*outp;
	int			i;

	i = 0;
	outp = malloc(sizeof(t_stock_str) * (ac + 1));
	if (outp == NULL)
		return (NULL);
	while (i < ac)
	{
		outp[i].size = ft_strlen(av[i]);
		outp[i].str = av[i];
		outp[i].copy = ft_strdup(av[i]);
		i++;
	}
	outp[i].size = 0;
	outp[i].str = 0;
	outp[i].copy = 0;
	return (outp);
}

/*#include <stdio.h>
*#include <stdlib.h>
*struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
*
*int	main(int argc, char **argv)
*{
*	t_stock_str	*outp;
*	int			i;
*
*	outp = ft_strs_to_tab(argc - 1, argv + 1);
*	i = 0;
*	while (i < argc - 1)
*	{
*		printf(".size[%d] = %d, .str[%d] = %s at address %p, \
*		.copy[%d] = %s at address %p\n", i, outp[i].size, i, outp[i].str, \
*		&outp[i].str, i, outp[i].copy, &outp[i].copy);
*		i++;
*	}
*	free (outp);
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_strs_to_tab.c && ./a.out 11 222 3333 */