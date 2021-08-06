/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:59:23 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/19 11:59:26 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/*#include <stdio.h>
*int	ft_sqrt(int nb);
*
*int	main(void)
*{
*	printf("the square root of a 1: \t%d\n", ft_sqrt(1));
*	printf("the square root of a 4: \t%d\n", ft_sqrt(4));
*	printf("the square root of a 5: \t%d\n", ft_sqrt(5));
*	printf("the square root of a 64: \t%d\n", ft_sqrt(64));
*	printf("the square root of a 144: \t%d\n", ft_sqrt(144));
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_sqrt.c && ./a.out */
