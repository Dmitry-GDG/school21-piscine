/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 13:04:52 by dmitry            #+#    #+#             */
/*   Updated: 2021/08/03 13:04:55 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*outp;
	int	i;

	outp = malloc(sizeof(int) * length);
	if (outp == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		outp[i] = f(tab[i]);
		i++;
	}
	return (outp);
}

/*#include <stdio.h>
*#include <stdlib.h>
*int	*ft_map(int *tab, int length, int(*f)(int));
*
*int	my_multi_array(int nb)
*{
*	return (nb * 2);
*}
*
*int	main(void)
*{
*	int	tab[10];
*	int	length;
*	int	i;
*	int	*outp;
*
*	length = 10;
*	tab[0] = 1;
*	i = 1;
*	while (i < length)
*	{
*		tab[i] = tab[i - 1] + 2;
*		i++;
*	}
*	outp = ft_map(tab, length, &my_multi_array);
*	printf("\n");
*	i = 0;
*	while (i < length)
*	{
*		printf ("tab[%d] = %d\toutp[%d] = %d\n", i, tab[i], i, outp[i]);
*		i++;
*	}
*}*/

/* call it:
* gcc -Wall -Wextra -Werror ft_map.c && ./a.out */
