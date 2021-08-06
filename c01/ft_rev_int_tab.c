/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 19:24:20 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/14 19:24:26 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*#include <stdio.h>
*void	ft_rev_int_tab(int *tab, int size);
*
*int	main(void)
*{
*	int	tab[10];
*	int	i;
*	int	size;
*
*	i = 0;
*	size = 10;
*	while (i < size)
*	{
*		tab[i] = i;
*		printf("%d, ", tab[i]);
*		i++;
*	}
*	printf("%s", "\n");
*	ft_rev_int_tab(tab, size);
*	i = 0;
*	while (i < size)
*	{
*		printf("%d, ", tab[i]);
*		i++;
*	}
*	printf("%s", "\n");
*	return (0);
*}*/
/*call it:
*   gcc -Wall -Wextra -Werror ft_rev_int_tab.c && ./a.out   */
