/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:02:21 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/03 15:02:24 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	qty;

	qty = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			qty++;
		i++;
	}
	return (qty);
}

/*#include <stdio.h>
*int	ft_count_if(char **tab, int length, int(*f)(char*));
*
*int	ft_strlen(char *tab)
*{
*	int	i;
*
*	i = 0;
*	while (tab[i])
*		i++;
*	printf ("strlen(%s) = %d\n", tab, i);
*	return (i);
*}
*
*int	main(void)
*{
*	char	*tab[100] = {"wweerr", "", "rty"};
*	int		i;
*
*	i = 0;
*	while (tab[i])
*	{
*		printf ("tab[%d] = %s\n", i, tab[i]);
*		i++;
*	}
*	printf ("%d\n", ft_count_if(tab, i, &ft_strlen));
*
*}*/

/* call it:
* gcc -Wall -Wextra -Werror ft_count_if.c && ./a.out  */
