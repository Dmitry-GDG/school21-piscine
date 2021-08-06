/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 20:06:18 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/14 20:06:22 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	i0;

	i0 = 0;
	while (i0 <= (size - 1))
	{
		i = 0;
		while (i < (size - 1))
		{
			if ((tab[i] > tab[i + 1]))
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		i0++;
	}
}

/*#include <stdio.h>
*void	ft_sort_int_tab(int *tab, int size);
*
*int	main(void)
*{
*	int	i;
*	int	tab[10];
*	int	size;
*
*	size = 10;
*	i = size - 1;
*	while (i >= 0)
*	{
*		tab[i] = size - i;
*		i--;
*	}
*	tab[3] = 55;
*	tab[7] = 88;
*	tab[2] = 41;
*	i = 0;
*	while (i < size)
*	{
*		printf("%d, ", tab[i]);
*		i++;
*	}
*	printf("%s", "\n");
*	ft_sort_int_tab(tab, size);
*	i = 0;
*	while (i < size)
*	{
*		printf("%d, ", tab[i]);
*		i++;
*	}	
*	return (0);
*}*/
/*call it:
*   cc -Wall -Wextra -Werror ft_sort_int_tab.c && ./a.out  */
