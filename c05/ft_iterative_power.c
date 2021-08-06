/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 08:24:53 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/19 08:24:55 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	outp;

	outp = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power)
	{
		outp *= nb;
		power--;
	}
	return (outp);
}

/*#include <stdio.h>
*int	ft_iterative_power(int nb, int power);
*
*int	main(void)
*{
*	int	power;
*
*	power = 3;
*	printf("Iterative_power of 5: %d\n", ft_iterative_power(5, power));
*	printf("Iterative_power of 7: %d\n", ft_iterative_power(7, power));
*	return (0);
*}*/
/*call it:
* gcc -Wall -Wextra -Werror ft_iterative_power.c && ./a.out */