/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 13:33:57 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/03 13:34:01 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
*int	ft_any(char **tab, int(*f)(char*));
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
*	char	*tab[100] = {"", "", "rty"};
*	int		i;
*
*	i = 0;
*	while (tab[i])
*	{
*		printf ("tab[%d] = %s\n", i, tab[i]);
*		i++;
*	}
*	printf ("%d\n", ft_any(tab, &ft_strlen));
*
*}*/

/* call it:
* gcc -Wall -Wextra -Werror ft_any.c && ./a.out  */
