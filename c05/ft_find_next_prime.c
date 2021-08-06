/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:57:39 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/19 12:57:51 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	if (nb <= 1)
		return (0);
	i = 1;
	while (i <= nb / 2)
	{
		j = i + 1;
		while (j <= nb / 2)
		{
			if (i * j == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (i < nb)
		{
			if (ft_is_prime(nb + i))
				return (nb + i);
			else
				i++;
		}
	}
	return (0);
}

/*#include <stdio.h>
*int	ft_is_prime(int nb);
*
*int	main(void)
*{
*	printf("Next greater or equal %d\t\tprime - %d\n", 5, ft_find_next_prime(5));
*	printf("Next greater or equal %d\t\tprime - %d\n", 6, ft_find_next_prime(6));
*	printf("Next greater or equal %d\t\tprime - %d\n", 7, ft_find_next_prime(7));
*	printf("Next greater or equal %d\tprime - %d\n", 142, ft_find_next_prime(142));
*	printf("Next greater or equal %d\tprime - %d\n", 143, ft_find_next_prime(143));
*	printf("Next greater or equal %d\tprime - %d\n", 149, ft_find_next_prime(149));
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_find_next_prime.c && ./a.out */
