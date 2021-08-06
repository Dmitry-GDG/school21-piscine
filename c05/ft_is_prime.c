/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:17:12 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/19 12:17:15 by dmitry           ###   ########.fr       */
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

/*#include <stdio.h>
*int	ft_is_prime(int nb);
*
*void is_is_prime (int nb)
*{
*	if (nb == 0)
*		printf("No\n");
*	else if (nb == 1)
*		printf("Yes\n");
*	else
*		printf("I don\'t know\n");
*}
*
*int	main(void)
*{
*	printf("Is %d\tprime? - ", 5);
*	is_is_prime(ft_is_prime(5));
*	printf("Is %d\tprime? - ", 6);
*	is_is_prime(ft_is_prime(6));
*	printf("Is %d\tprime? - ", 7);
*	is_is_prime(ft_is_prime(7));
*	printf("Is %d\tprime? - ", 142);
*	is_is_prime(ft_is_prime(142));
*	printf("Is %d\tprime? - ", 143);
*	is_is_prime(ft_is_prime(143));
*	printf("Is %d\tprime? - ", 149);
*	is_is_prime(ft_is_prime(149));
*	return (0);
*}*/
/* call it:
* gcc -Wall -Wextra -Werror ft_is_prime.c && ./a.out */
