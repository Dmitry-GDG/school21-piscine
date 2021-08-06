/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 08:36:50 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/19 08:37:09 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	outp;

	outp = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}

/*#include <stdio.h>
*int	ft_recursive_power(int nb, int power);
*
*int	main(void)
*{
*	int	power;
*
*	power = 3;
*	printf("recursive_power of 5: %d\n", ft_recursive_power(5, power));
*	printf("recursive_power of 7: %d\n", ft_recursive_power(7, power));
*	return (0);
*}*/
/*call it:
* gcc -Wall -Wextra -Werror ft_recursive_power.c && ./a.out */
