/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:53:19 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/04 15:53:22 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	char	*tmp;
	int		size;

	size = ft_strlen(*tab);
	i = 0;
	while (i < size - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

/*#include <stdio.h>
*int	ft_strlen(char *str);
*void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));
*
*int	ft_strcmp(char *s1, char *s2)
*{
*	unsigned int	i;
*
*	i = 0;
*	while (s1[i] && s2[i] && (s1[i] == s2[i]))
*		i++;
*	return (s1[i] - s2[i]);
*}
*
*int	main(int argc, char **argv)
*{
*	int		i;
*
*	if (argc > 1)
*	{
*		i = 0;
*		while (i < argc)
*		{
*			printf("argv[%d] before = %s\n", i, argv[i]);
*			i++;
*		}
*		ft_advanced_sort_string_tab(argv, ft_strcmp);
*		i = 0;
*		while (i < argc)
*		{
*			printf ("argv[%d] after = %s\n", i, argv[i]);
*			i++;
*		}
*	}
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_advanced_sort_string_tab.c && ./a.out \
* "qwer" "qweas" "123qw" "12345" "asdew" "asdzx" */