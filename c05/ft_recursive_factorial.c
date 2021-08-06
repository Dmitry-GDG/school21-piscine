/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:54:00 by dmitry            #+#    #+#             */
/*   Updated: 2021/07/18 12:54:04 by dmitry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
*int	ft_recursive_factorial(int nb);
*
*int	main(void)
*{
*	printf("Factorial of 5 is:  %d\n", ft_recursive_factorial(5));
*	printf("Factorial of 12 is: %d\n", ft_recursive_factorial(12));
*	return (0);
*}*/
/* call it: #факториал числа больше 12 в int не помещается
* gcc -Wall -Wextra -Werror ft_recursive_factorial.c && ./a.out */
