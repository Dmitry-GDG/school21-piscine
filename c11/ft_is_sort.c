/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:18:32 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/03 17:18:35 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	sign;
	int	prev;

	sign = 1;
	i = 1;
	while (i < length)
	{
		while (f(tab[i - 1], tab[i]) == 0)
			i++;
		prev = tab[i - 1];
		if (f(tab[i - 1], tab[i]) > 0)
			sign = 1;
		if (f(tab[i - 1], tab[i]) < 0)
			sign = -1;
		while (tab[i] && ((f(tab[i - 1], tab[i]) < 0 && sign < 0) || \
		(f(tab[i - 1], tab[i]) > 0 && sign > 0) || f(tab[i - 1], tab[i]) == 0))
			i++;
		if (tab[i] && ((f(tab[i - 1], tab[i]) < 0 && sign > 0) || \
		(f(tab[i - 1], tab[i]) > 0 && sign < 0)))
			return (0);
	}
	return (1);
}

/*#include <stdio.h>
*int	ft_is_sort(int *tab, int length, int(*f)(int, int));
*
*int my_if_big(int i1, int i2)
*{
*	return (i1 - i2);
*}
*
*int	ft_lenstr(int *tab)
*{
*	int	i;
*
*	i = 0;
*	while (tab[i])
*		i++;
*	return (i);
*}
*
*int	main(void)
*{
*	int tab[100] = {-1, 2, 6, 8, 8, 9, 10, 11, 10};
*	printf("%d\n", ft_is_sort(tab, ft_lenstr(tab), &my_if_big));
*	int tab1[100] = {-1, 2, 6, 8, 8, 9, 10, 11, 11};
*	printf("%d\n", ft_is_sort(tab1, ft_lenstr(tab1), &my_if_big));
*	int tab2[100] = {-1, -2, -6, -8, -8, -9, -10, -11, -12};
*	printf("%d\n", ft_is_sort(tab2, ft_lenstr(tab2), &my_if_big));
*	return (0);
*}*/

/* call it:
* gcc -Wall -Wextra -Werror ft_is_sort.c && ./a.out */
